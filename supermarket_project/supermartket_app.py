import os

from utils import load_data, save_data

store_name = "SuperMarket"
godown = load_data()


def get_products():  # takes the input of product and quantity from user and updates it accordingly and returns to a variable to store it
    data = {}

    choice = True
    while choice:
        print("\n")
        # details = input("Enter (A) to input a product,  Q to quit : ").lower()
        details = input(
            f"[{store_name}]-Main Menu\n\t1) Input a product\n\t2) Exit\n\nWhat would you like to do?: ")

        if details == "1":
            product = input("\n>>> Enter the name of product : ").lower()

            if product in godown:
                quantity = int(
                    input(f">>> Enter the quantity of the product({product}): "))
                if product not in data:
                    data[product] = quantity
                else:
                    data[product] += quantity
            else:
                print(f"\n[!] {product} does not exist!\n")
                continue

        elif details == '2':
            choice = False
            return data

        else:
            print("\n[!] Please enter a vaild input (1,2)!\n")


def get_price(name, quantity):  # it gets the name and quantity from the

    subtotal = godown.get(name)*quantity
    print("{} : ${}x{} =${} ".format(name.upper(),
          godown.get(name), quantity, subtotal))
    print("\n")
    return subtotal


def get_add_price(name, quantity):  # it gets the name and quantity from thea
    subtotal = godown.get(name)*quantity
    return subtotal


# final contains "name" : quantity , which is inputted by the user using the get_Products function
def get_total_bill(final):

    total = 0
    for key, value in final.items():
        total += get_add_price(key, value)
    return total


def get_bill(final):
    print("\n\n\n")
    os.system('cls')
    print("-"*20+"Bill"+"-"*20)
    total = 0
    for key, value in final.items():
        get_price(key, value)

    print("\n\nYour total bill is = ${} ".format(get_total_bill(final)))
    print("-"*20+"-"*24)


def execute():
    items = get_products()  # the data is passed on to the variable which stores the "bill"
    # processes each of the items and gets the individual bills and also prints the total bill.
    get_bill(items)
    save_data(godown)
