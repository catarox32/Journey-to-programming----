import tkinter as tk

root = tk.Tk()
root.geometry("800x600")
root.title("Different Buttons in python")

label = tk.Label(root, text="Mr. Loba Loba", font=("Arial","18"))
label.pack()    

textbox = tk.Text(root, height=2 , font=("Arial","12"))
textbox.pack()

bt_frame = tk.Frame(root)
bt_frame.columnconfigure(0, weight=1)
bt_frame.columnconfigure(1, weight=1)
bt_frame.columnconfigure(2, weight=1)

btn1 = tk.Button(bt_frame,  text="Do Not click", font=("Arial","10"))
btn1.grid(row=0, column=0, sticky=tk.W+tk.E)
btn2 = tk.Button(bt_frame, text="Do Not click", font=("Arial", "10"))
btn2.grid(row=0, column=1, sticky=tk.W+tk.E)
btn3 = tk.Button(bt_frame, text="Do Not click", font=("Arial", "10"))
btn3.grid(row=0, column=2, sticky=tk.W+tk.E)
bt_frame.pack(fill='x')

print(textbox.get())


tk.mainloop()