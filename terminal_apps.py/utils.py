import json
import os

base_path = os.path.dirname(os.path.abspath(__file__))


def load_data():
	with open(os.path.join(base_path, "to_app.json")) as f:
		godown = json.load(f)
	return godown


def save_data(godown):
	with open(os.path.join(base_path, "to_app.json")) as f:
		json.dump(godown, f)
