import json
import os

base_path = os.path.dirname(os.path.abspath(__file__))
file_name = "to_app.json"
file_path = os.path.join(base_path, file_name)


def load_data():
    f = open(file_path)
    godown = json.load(f)
    f.close()
    return godown


def save_data(godown):
    f = open(file_path, "w")
    json.dump(godown, f)
    f.close()
