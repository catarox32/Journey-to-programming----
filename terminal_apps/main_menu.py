import supermartket_app
import management
from utils import load_data, save_data


store_name = "Praneesh Super Market"

def console_choice():
    print("Dear User , Welcome to Praneesh SuperMarkert ")
    print("\n\n")
    choice = int(input(
        f"[{store_name}]-Main Menu\n\t1) Enter management software\n\t2) Enter bil making software\n\n\tWhat would you like to do? : "))
    if choice == 1:
        management.execute()

    if choice == 2:
        supermartket_app.execute()


if __name__ == "__main__":
    console_choice()
