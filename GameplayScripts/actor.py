import logging
import redis
import json
import sys

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

step = 1
r = redis.Redis(host="localhost", port=6379, db=0)
being_observed = False

def observe(game):
    obs = {"time": game.time}
    return obs

def act(action_type, action_data, game, ui):
    pass


def lview_update(game, ui):
    global r, being_observed, logger, step
    
    logger.info("CURRENT STEP: %d" % step)
    step += 1

    json_txt = r.brpop("command")
    if json_txt == None:
        logger.error("Invalid command")

    else:
        # Get current command
        logger.info("REDIS GET CMD: " + str(json_txt))
        current_command = json_txt[1].decode("utf-8")

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