j=int(input())
flag=0
temp=input().split()


flag=0


for x,y in enumerate(temp):
    if(y ==str(x+1)):
        flag+=1
    elif(y in "mumble"):
         flag+=1


if(flag==j):
    print("makes sense")
else:
    print("something is fishy")
