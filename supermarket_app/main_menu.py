import supermartket_app
import management
from utils import load_data, save_data
import os

os.system('cls')


store_name = "Praneesh Super Market"

def console_choice():
    print("\n\n")
    
    print(f"Dear User , Welcome to {store_name} ")
    print("\n\n")
    while True :
        choice = int(input(
            f"[{store_name}]-Main Menu\n\t1) Enter management software\n\t2) Enter bill making software\n\n\tWhat would you like to do? : "))
        if choice == 1:
            management.execute()
            break

        if choice == 2:
            supermartket_app.execute()
            break
        
        if choice != 1 or choice != 2:
            print(f"\nYou have entered a wrong input - '{choice}' , please enter correct input (1,2) \n\n\n")
            continue


if __name__ == "__main__":
    console_choice()
