type = int(input("Enter the type of prodcut according to the nos assigned \n\t > 1 for ONLINE \n\t > 2 for OFFLINE \n\n\t Type :"))

price = float(input("Enter the price of the product you are buying : "))
quantity = int(input("Please enter the quantity of the prodcut being bought : "))

if(type==1):
    print("The price to be paid for the product is {}".format(price*quantity))
elif(type==2):
    print("The price to be paid for the product is {}".format((price*quantity)-(0.10*price*quantity)))
