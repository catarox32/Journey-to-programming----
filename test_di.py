dict1= {
    "1233235235":{
        "product_name":"egg",
        "product_price":"50",
        "product_quantity":"5"
    }
}

for keys,values in dict1.items():
    print(f"product_id={keys}")
    for key1,value1 in values.items():
        print(f"{key1} = {value1}")