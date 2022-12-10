import json
import os
from getpass import getpass

os.system('cls')

base_path = os.path.dirname(os.path.abspath(__file__))
file_name = "passwords.json"
file_path = os.path.join(base_path, file_name)

def load_data():
    f = open(file_path)
    passwords = json.load(f)
    f.close()
    return passwords

passwords = load_data()
login_state = True

while login_state:
    while True:
        user_name = input("Please enter a username $")
        if user_name not in passwords:
            print("Incorrect username")
            if input("Would you like to enter again?(y/n} $").lower() != 'y':
                break
        else:
            break
    while login_state:    
        password = getpass("Please enter your password $")

        for keys,values in passwords.items():
            
            if keys == user_name:
                if values == password:
                    print("You are logged on!")
                    login_state = False
                else:
                    print("Incorrect password!")
                    if input("Do you want to enter again?(y/n) $").lower() != 'y':
                        break
            else:
                break