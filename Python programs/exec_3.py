sum_Odd = 0 
sum_Even = 0

for i in range(10,40):
    if(i%2==0):
        sum_Even = sum_Even + i 
    else:
        sum_Odd = sum_Odd + i
    i = i +1

print("The total of even is = {}".format(sum_Even))
print("The total of even is = {}".format(sum_Odd))
