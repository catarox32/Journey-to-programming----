list1 = []  # empty list

# 6 integer valuese which can be accesed using the index values starting from 0 to the end , we can find the length of thte data using the len(list2)
list2 = [1, 2, 3, 4, 5, 6]

# we can also add elemetns to the ist by usiing a fucntion calle append(), for eg


# we can append new values from the user to the list , it is possible
n = int(input("Enter how many elements do you want to add to the lsit : "))

for i in range(0, n):
    temp = int(input("Enter value {} : ".format((i+1))))
    list2.append(temp)
print("New list = {}".format(list2))

# we can also create a new list using the append by declaring an empty list

list3 = []
n_1 = int(input("Enter how many elements do you want the list to be  : "))

for i in range(0, n_1):
    temp = int(input("Enter value {} : ".format((i+1))))
    list3.append(temp)
print(list3)
print("\n\n")
# python has a fucntion by which we can concatinate two lists to make a new list

list4 = list2+list3

print("The concatinated list is = {}".format(list4))
print("\n\n")
# we can also repeat the same elements in the list if it is required so we do it with multiplication

list5 = list2*2

print("Repeated list = "+str(list5))
print("\n\n")
# we can also check if there is any mnumber that we want present the given list for eg we want some number which we want so we can check that using for loop and the 'in' operator

want_no = 1

for i in list2:
    if i == want_no:
        print("{} is present in the list ".format(i))
        break
else:
    print("{} is not present in the list ".format(i))
print("\n\n")
#we can print the members of the list one by one using for loop 

print("Printing the elements one by one \n")

for i in list2:
    print(i)
print("\n\n")
#we can slice the list using the given functions available for list

n_2 = int(input("How much do want to slice the list by:"))
print("Sliced list = {}".format(list2[n_2:]))
print("\n\n")
#we can delet elements of a list also using the del fucntion 

n_3 = int(input("Which element do you want to delete : "))
del list2[list2.index(n_3)]

print("The deleted list = {}".format(list2))
print("\n\n")
#we also can find the count of a value in the list

n_4 = int(input("Enter the no you want to find the occurencce of  : "))
print("{} occurs {} times".format(n_4,list2.count(n_4)))
print("\n\n")
#we can also insert an element at the given index 

index = int(input("Enter the index at which you want the value : "))
n_5 = int(input("Enter the  value you want add : "))

print("The list with the added value is below")
list2.insert(index-1, n_5)
print(list2)
print("\n\n")
# reversing ther order of the list is also possible 

print(list2)
print("The reversed list is below : ")
list2.reverse()
print(list2)
print("\n\n")
#we can reoomve the an element from the list 
print(list2)
n_6 = int(input("Which element do you want to remmove : "))
print("The removed list is below  ")
list2.remove(n_6)
print(list2)
print("\n\n")
#there are many functoins in list which can give us the min , max and the length
print(list2)

print("length = "+str(len(list2)))
print("max = "+str(max(list2)))
print("min = "+str(min(list2)))
print("\n\n")
#there is a pop function available in list which removes the last value of the give nlist nad returns it 

print("The last element is = "+str(list2.pop()))
print("\n\n")
