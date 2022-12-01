def toFact(n):
    fact = 1
    if n!=0:
        fact = fact*toFact(n-1)
    else:
        return fact
    
no = int(input("Enter a number to find factorial of : "))
fact = toFact(no)
print("The factorial of {} is {} ".format(no,fact))
    