enc=""
flag=input("Enter the plain text to encode: ")
binary=""
for i in flag:
    b=(bin(ord(i))).replace("0b","")
    if len(b)<8:
        x=8-len(b)
        b="0"*x+b
    binary=binary+" "+b
bins=filter(("").__ne__, binary.split(" "))
fbins=list()
for i in bins:
    x=i[0:4]
    y=i[4:8]
    fbins.append(x)
    fbins.append(y)
for i in range(0,int(len(fbins)//2)):
    x=fbins[-1-i]+fbins[i]
    enc=enc+chr(int(x,2))
print(enc)
