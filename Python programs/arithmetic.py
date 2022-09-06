from tkinter.tix import InputOnly


a = int(input("Enter a number : "))
b = int(input("Enter another number : "))
c = input("Chose an arithmetic operator + , - , / , * : ")
if c=='+':
    print(a+b)
elif c=='-':
    print(a-b)
elif c=='/':
    print(a/b)
elif c=='*':
    print(a*b)
else:
    print("wrong input")

    