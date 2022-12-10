import json

# define a function to add a new expense
def add_expense(expense):
    # validate the user input
    if expense == "":
        # show an error message if the input is empty
        print("Please enter a valid expense.")
        return
    
    # try to convert the user input to a float
    try:
        expense = float(expense)
    except ValueError:
        # show an error message if the input cannot be converted to a float
        print("Please enter a valid expense.")
        return
    
    # read the existing expenses from the JSON file
    with open("expenses.json", "r") as f:
        expenses = json.load(f)
    
    # append the new expense to the list of expenses
    expenses.append(expense)
    
    # write the updated list of expenses to the JSON file
    with open("expenses.json", "w") as f:
        json.dump(expenses, f)
    
    # show a confirmation message
    print("Expense added successfully.")

# keep accepting user input until the user enters "q"
while True:
    expense = input("Enter your daily expenses (or 'q' to quit): ")
    if expense == "q":
        break
    add_expense(expense)