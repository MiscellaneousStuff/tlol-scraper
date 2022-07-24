from lview import *

lview_script_info = {
    "script": "TLoL - Replay Extractor",
    "author": "MiscellaneousStuff",
    "description": "Extracts information from replay files as they're running for deep learning"
}

def lview_load_cfg(cfg): pass
def lview_save_cfg(cfg): pass
def lview_draw_settings(game): pass

last_time = 0.0

def lview_update(game):
    global last_time

    if game.time != last_time:
        pass