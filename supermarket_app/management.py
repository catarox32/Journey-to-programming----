from utils import load_data, save_data
from getpass import getpass


def execute():
    godown = load_data()
    state_1 = True
    state_2 = True
    state_3 = True
    state_4 = True

    while state_1:
        print("-"*50)
        password = getpass(
            ">>> Dear user , welcome to the management console please enter password to continue \n\t :")
        if password != "dardedil":
            print("Wrong password !! \n Try again")
            continue
        else:  # ye wala
            while state_2:
                print("\n\n")
                ch = input(
                    ">>> Dear user , welcome to the management console ! \n Enter 1 to Add product \n Enter 2 to remove product \n\t:")
                if ch == '1':
                    while state_4:
                        print("\n\n")
                        product = input(
                            ">>> Enter name of product that you wish to add : ").lower()
                        if product in godown:
                            print("The product already exists!")
                        else:
                            quantity = int(
                                input(">>>Enter the price of the product : "))
                            godown[product] = quantity
                            print(f"{product} successfully added !")
                        ch_3 = int(
                            input(">>> Enter 1 to add more products or enter 2 to exit the operation : "))
                        if ch_3 == 1:
                            continue
                        else:
                            state_4 = False

                elif ch == '2':
                    while state_3:
                        print("\n\n")
                        to_show = input(">>> If you want to show the present list of products enter 1 otherwise enter anyother number : ")
                        print("\n\n")
                        if to_show == "1":
                            print("-"*10+"PRODCUTS"+"-"*20)
                            for keys, values in godown.items():
                                print("\t",keys)
                        print("\n\n")
                        product = input(
                            ">>> Enter name of product you wish to remove : ").lower()
                        if product not in godown:
                            print(
                                "Product doesn't exist , Please enter a valid product")
                            continue
                        godown.pop(product)
                        print(f"{product} succesfully removed !")
                        ch_2 = int(
                            input(">>> Enter 1 to remove more products or Enter 2 to exit the operation : "))
                        if ch_2 == 1:
                            continue
                        else:
                            state_3 = False
                elif not ch.isnumeric():
                    print("Wrong input ! Please only enter numbers!")
                    print("\n\n")
                    continue
                else:
                    print("Wrong input , please try again !")
                    print("\n\n")
                    continue

                if int(input(">>> If you want to do more operation (add or remove) press 1 if you want to exit press 2 : ")) == 1:
                    print("\n\n")
                    continue
                else:
                    state_2 = False
                    state_1 = False
                    save_data(godown)
