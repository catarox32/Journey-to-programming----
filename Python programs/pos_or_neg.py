number = int(input(" Enter a number : "))
if(number<0):
    print("{} is negative".format(number))
elif(number>0):
    print("{} is positive".format(number))
else:
    print("Wrong input")