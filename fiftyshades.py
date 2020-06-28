x=int(input())
flag=0
for i in range(1,x+1):
    temp=input()
    temp=temp.lower()
    if ("pink" in temp):
        flag=flag+1
    elif ("rose" in temp):
        flag=flag+1
    

if(flag>0):
    print(flag)
else:
    print("I must watch Star Wars with my daughter")