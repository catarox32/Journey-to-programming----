import tkinter as tk

root = tk.Tk() #this is the main "window" object that is reffered as the paren
root.geometry("800x600") # defines the size of the windows
root.title("1st GUI") # THe title of the window

label = tk.Label(root, text="Hello World!" , font=("Arial","18")) #creates a label in the window can be defined as text 
label.pack(padx=20, pady=20) # provides space form the conrers of the window

text_box = tk.Text(root,height=1, font=('Arial','18'))#add a text box , can be modified with the parameters like height and such
text_box.pack(padx=10)

button = tk.Button(root, text="Click to pay respect" , font=("Arial","12"))#creates a button with the same parameter concept , 
button.pack()



tk.mainloop()
