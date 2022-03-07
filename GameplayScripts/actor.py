from lview import *

import math
import pandas as pd
import zerorpc

lview_script_info = {
	"script": "Actor",
	"author": "MiscellaneousStuff",
	"description": "Executes a machine learning model which plays League of Legends."
}

def lview_load_cfg(cfg):
    pass

def lview_save_cfg(cfg):
    pass

def lview_draw_settings(game, ui):
    pass

prev_x = 0
prev_y = 0
prev_z = 0
multiplier = 3.5 # Obs/Sec
limit_rate = 1 / multiplier
counter = -1

def lview_update(game, ui):
    global prev_x, prev_y, prev_z, counter, limit_rate

    first_minion_spawn = 60 + 5

    min_spawn = 30 - ((game.time - first_minion_spawn) % 30) \
                if game.time >= first_minion_spawn \
                else first_minion_spawn - game.time

    cur_counter = math.floor(game.time / limit_rate)
    if cur_counter > counter and game.time >= 5.0:
        print(game.time, limit_rate, cur_counter)

        # Construct obs
        obs = [
            game.time,
            min_spawn,
            game.player.health,
            game.player.max_health,
            game.player.team,
            game.player.armour,
            game.player.magic_resist,
            game.player.movement_speed,
            game.player.is_alive,
            game.player.pos.x,
            game.player.pos.y,
            game.player.pos.z,
            0, # is_moving
            0, # targetable
            0, # invulnerable
            0, # recallState
            game.player.Q.level,
            0, # game.player.Q.cd,
            game.player.W.level,
            0, # game.player.W.cd,
            game.player.E.level,
            0, # game.player.E.cd,
            game.player.R.level,
            0, # game.player.R.cd,
            game.player.D.level,
            0, # game.player.D.cd,
            0, # D spell type
            game.player.F.level,
            0, # game.player.F.cd,
            0, # F spell type
            game.player.crit,
            game.player.crit_multi,
            1, # game.player.level,
            200, # game.player.mana,
            245.0, # max mana
            0, # ability haste
            0, # ap
            0, # lethality
            0, # xp
            0, # mp regen
            0.8, # game.player.hp_regen,
            game.player.base_atk_range,
            0, # current gold
            0, # total gold
            prev_x,
            prev_y,
            prev_z]

        # Infer action
        c = zerorpc.Client()
        c.connect("tcp://127.0.0.1:4242")
        move = c.infer(obs)
        
        # Calculate player-relative offsets
        x_off = (move % 9)  - 4
        z_off = (move // 9) - 4
        print(move, x_off, z_off)

        # Move to inferred location
        new_pos = game.player.pos
        new_pos.x = new_pos.x + (x_off * 100)
        new_pos.z = new_pos.z + (z_off * 100)
        game.click_at(False, game.world_to_screen(new_pos))

        # Set prev positions for next iteration
        prev_x = game.player.pos.x
        prev_y = game.player.pos.y
        prev_z = game.player.pos.z
        
    counter = cur_counter