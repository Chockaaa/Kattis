value=[]

for x in input().split():
    value.append(x)

value=[int(n) for n in value]


snowcount=[]
for x in input().split():
    snowcount.append(x)

snowcount=[int(n) for n in snowcount]
flag=0
for x in range(0,len(snowcount)):
    if(snowcount[x]<=value[1]):
        print("It hadn't snowed this early in",x," years!")
        break
    else:
        flag+=1

    if flag==len(snowcount):
        print("It had never snowed this early!")
