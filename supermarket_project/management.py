from utils import load_data, save_data


def execute():
    godown = load_data()
    state_1 = True
    state_2 = True
    state_3 = True
    state_4 = True

    while state_1:
        password = input(
            "Dear user , welcome to the management console please enter password to continue \n\t :")
        if password != "dardedil":
            print("Wrong password !! \n Try again")
            continue
        else:  # ye wala
            while state_2:
                ch = input(
                    "Dear user , welcome to the management console ! \n Enter 1 to Add product \n Enter 2 to remove product \n\t:")
                if int(ch) == 1:
                    while state_4:
                        product = input(
                            "Enter name of product that you wish to add : ")
                        if product in godown:
                            print("The product already exists!")
                        else:
                            quantity = int(
                                input("Enter the price of the product : "))
                            godown[product] = quantity
                            print(f"{product} successfully added !")
                        ch_3 = int(
                            input("Enter 1 to add more products or enter 2 to exit the operation : "))
                        if ch_3 == 1:
                            continue
                        else:
                            state_4 = False

                elif int(ch) == 2:
                    while state_3:
                        product = input(
                            "Enter name of product you wish to remove : ")
                        if product not in godown:
                            print(
                                "Product doesn't exist , Please enter a valid product")
                            continue
                        godown.pop(product)
                        print(f"{product} succesfully removed !")
                        ch_2 = int(
                            input("Enter 1 to remove more products or Enter 2 to exit the operation : "))
                        if ch_2 == 1:
                            continue
                        else:
                            state_3 = False
                elif not ch.isnumeric():
                    print("Wrong input ! Please only enter numbers!")
                    continue
                else:
                    print("Wrong input , please try again !")
                    continue

                if int(input(">>>  If you want to do more operation (add or remove) press 1 if you want to exit press 2 : ")) == 1:
                    continue
                else:
                    state_2 = False
                    state_1 = False
                    save_data(godown)
