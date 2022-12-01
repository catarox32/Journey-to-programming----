nos = []
n = int(input("How many nos do you want ot input : "))
total  =0 

for i in range(0,n) :
    a = int(input("Enter the number {} :".format(i+1)))
    nos.append(a)

for no in nos :
    total = total + no
    
print("The total of the numbers is  = {}".format(total))