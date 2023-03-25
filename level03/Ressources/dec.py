l=["0x757c7d51" ,"0x67667360" ,"0x7b66737e" ,"0x33617c7d"]

for i in l:
    a_string = bytes.fromhex(i.replace("0x",""))
    print(a_string.decode("ascii")[::-1],end='')
