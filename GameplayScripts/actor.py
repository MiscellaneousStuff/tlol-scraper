import logging
import redis
import json
import sys
import math

from lview import *

logger = logging.getLogger()
logger.setLevel(logging.INFO)
formatter = logging.Formatter('%(asctime)s | %(levelname)s | %(message)s')

stdout_handler = logging.StreamHandler(sys.stdout)
stdout_handler.setLevel(logging.DEBUG)
stdout_handler.setFormatter(formatter)

file_handler = logging.FileHandler('logs.log')
file_handler.setLevel(logging.DEBUG)
file_handler.setFormatter(formatter)

logger.addHandler(file_handler)
logger.addHandler(stdout_handler)

lview_script_info = {
	"script": "Actor",
	"author": "MiscellaneousStuff",
	"description": "Controller for a TLoL-RL instance."
}

def lview_load_cfg(cfg):           pass
def lview_save_cfg(cfg):           pass
def lview_draw_settings(game, ui): pass

# Limit observations per second
obs_rate = 8
limit_rate = 1000.0 / obs_rate
counter = -1

# Controller state variables and Redis connection to
# TLol-RL instance Redis server
step = 0
r = redis.Redis(host="localhost", port=6379, db=0)
being_observed = False

KEY_CODES = {
    "q": 16,
    "w": 17,
    "e": 18,
    "r": 19,
    "d": 32,
    "f": 33,
}

def observe(game):
    obs = {
        "time": game.time,
        "available_actions": {
            "can_no_op":   True,
            "can_move":    True,
            "can_auto":    True,
            "can_spell_0": True,
            "can_spell_1": True,
            "can_spell_2": True,
            "can_spell_3": True,
            "can_spell_4": True,
            "can_spell_5": True
        }
    }
    return obs

def act(action_type, action_data, game, ui):
    global KEY_CODES

    self = game.player

    action_type = action_type[1].decode("utf-8")
    action_data = action_data[1].decode("utf-8")
    if action_data == "":
        action_data = {}
    else:
        action_data = json.loads(action_data)

    logging.info("ACT: " + str(action_type) + ", " + str(action_data))
    if action_type == "noop":
        pass
    elif action_type == "move":
        # Position relative to player
        new_pos    = self.pos.clone()
        new_pos.x += action_data["x"]
        new_pos.z += action_data["y"]

        # Left click
        game.click_at(False, game.world_to_screen(new_pos))

        logging.info("CONTROLLER CLICKING: " + str(new_pos.x) + "," + str(new_pos.y))
    elif action_type == "spell":
        pass
        """
        spell_key_idx = KEY_CODES.keys()[action_data["spell_slot"]]
        spell_key     = KEY_CODES[spell_key_idx]
        x = action_data["x"]
        y = action_data["y"]
        game.move_cursor(game.world_to_screen(Vec3(x, 0, y)))
        game.press_key(spell_key)
        """
    elif action_type == "reset":
        pass

def lview_update(game, ui):
    global r, being_observed, logger, step, limit_rate, counter

    # NOTE: START := THROTTLE EXECUTION
    cur_counter = (game.time * 1000) // limit_rate

    if cur_counter <= counter:
        return

    # NOTE: END := THROTTLE EXECUTION

    logger.info("GAME TIME: %f" % game.time)
    logger.info("CURRENT COUNTER: %f" % cur_counter)

    step += 1

    logger.info("CURRENT STEP: %d" % step)

    json_txt = r.rpop("command")
    if json_txt != None:
        # Get current command
        logger.info("REDIS GET CMD: " + str(json_txt.decode("utf-8")))
        current_command = str(json_txt.decode("utf-8"))

        # Initialise obs / act
        if current_command == "start_observing":
            being_observed = True
        
    if being_observed:
        logger.info("SENDING OBS")

        # Send observation
        r.lpush("observation", json.dumps(observe(game)))

        logger.info("GETTING ACT(S)")

        # Get action
        action_len = r.llen("action")

        logger.info("ACT LEN: " + str(action_len))

        while action_len > 0 and action_len % 2 == 0:
            # Get action type and data
            action_type = r.brpop("action")
            action_data = r.brpop("action")

            logging.info("Action Type: " + str(action_type))
            logging.info("Action Data: " + str(action_data))

            act(action_type, action_data, game, ui)

            action_len = r.llen("action")
        
        logger.info("End of current obs/act iteration: Step %d" % step)
    
    counter = cur_counter