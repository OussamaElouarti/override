l=["0x756e505234376848" ,"0x45414a3561733951" ,"0x377a7143574e6758" ,"0x354a35686e475873", "0x48336750664b394d"]

for i in l:
    a_string = bytes.fromhex(i.replace("0x",""))
    print(a_string.decode("ascii")[::-1],end='')
