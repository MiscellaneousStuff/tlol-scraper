from lview import *

import requests
import sys
import json

from urllib3.exceptions import InsecureRequestWarning

requests.packages.urllib3.disable_warnings(category=InsecureRequestWarning)

set_replay = False

lview_script_info = {
	"script": "Extractor",
	"author": "MiscellaneousStuff",
	"description": "Extracts observations for machine learning."
}

replay_speed = 16

def lview_load_cfg(cfg):
    pass

def lview_save_cfg(cfg):
    pass

def lview_draw_settings(game, ui):
    pass

def lview_update(game, ui):
    global set_replay
    if game.time > 2.0:
        if not set_replay:
            requests.post(
                'https://127.0.0.1:2999/replay/playback',
                headers={
                    'Accept': 'application/json',
                    'Content-Type': 'application/json'
                },
                data = json.dumps({
                    "time": 2,
                    "speed": replay_speed
                }),
                verify=False
            )
            set_replay = True