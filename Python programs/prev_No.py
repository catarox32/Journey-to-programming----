string = input("Please enter a string : ")
a = int(input("Please enter how much nos to slice : "))
new_String = []

if a<=len(string) :
    for i in range(a+1,len(string)-1) :
        new_String.append(i)
elif a>len(string) :
    print("The number of characters to take away is more than the ones present in the string itself ! ")
    
print(str(new_String))