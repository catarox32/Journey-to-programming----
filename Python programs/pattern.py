def sum_Of_List(lst):
    sum = 0
    for i in lst:
        sum += int(i)
    print("The sum of the given elements in the list is = "+str(sum))


lst = []
input_1 = int(
    input("Please enter the number of items to be inputted in the list : "))
for i in range(0, input_1):
    ele = int(input("Enter element to be added to the list : "))
    lst.append(ele)
sum_Of_List(lst)



