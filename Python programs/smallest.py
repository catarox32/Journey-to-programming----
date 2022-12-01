# x, y, z = map(int, input("Enter three numbers:").split(" "))
# if(x<y and x<z):
#     print("{} is the smallest no.".format(x))
# elif(y<x and y<z):
#     print("{} is the smallest no.".format(y))
# elif(z<y and z<x):
#     print("{} is the smallest no.".format(z))

numbers = []
n= int(input("Enter the number of integer values present in the data : "))
for i in range(0,n):
    ele =  int(input("Enter the data : "))
    numbers.append(ele)
temp_1 , temp_2= numbers[0],numbers[n-1]
count = 0

while(count<n):
    if(numbers[count]<=temp_1):
        smallest = numbers[count]
    else:
        smallest = temp_1
    if (numbers[count] >= temp_2):
        largest = numbers[count]
    else:
        largest = temp_2
    
    count=count+1
    
print("The smallest number is = ",smallest)
print("The largest number is = " ,largest)