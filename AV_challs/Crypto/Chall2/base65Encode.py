index={0:'a',1:'b',2:'c',3:'d',4:'e',5:'f',6:'g',7:'h',8:'i',9:'j',10:'k',
       11:'l',12:'m',13:'n',14:'o',15:'p',16:'q',17:'r',18:'s',19:'t',
       20:'u',21:'v',22:'w',23:'x',24:'y',25:'z',26:'0',27:'1',28:'2',
       29:'3',30:'4',31:'5',32:'6',33:'7',34:'8',35:'9',36:'A',37:'B',
       38:'C',39:'D',40:'E',41:'F',42:'G',43:'H',44:'I',45:'J',46:'K',
       47:'L',48:'M',49:'N',50:'O',51:'P',52:'Q',53:'R',54:'S',55:'T',
       56:'U',57:'V',58:'W',59:'X',60:'Y',61:'Z',62:'_',63:'{',64:'}'}

values=list(index.values())
string=list((input("Enter string: ")).replace(" ",""))
for i in string:
    if i not in values:
        print("Invalid character found ",i)
        exit(0)

binarystring=[]

for i in string:
    binary=bin(ord(i)).replace("0b","")
    if len(binary)<8:
        m=8-len(binary)
        binary=("0"*m)+binary
    binarystring.append(binary)

binary="".join(binarystring)
encode=""
i=0
while i<len(binary):
    dec=int(binary[i:i+4],2)
    encode=encode+index[dec]
    i+=4

print(encode)
