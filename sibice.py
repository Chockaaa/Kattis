import math

value=[]
for s in input().split():
    value.append(s)
value=[int(i) for i in value]

match=value[0]
width=value[1]
height=value[2]
temp=width*width+height*height
cross=math.sqrt(temp)
bank=[]
maxa=range(0,match)


for i in maxa:
    bank.append(int(input()))

for i in maxa:
    flag=0
    if bank[i]>width:
        flag=flag+1
    if bank[i]>height:
        flag=flag+1
    if bank[i]>cross:
        flag=flag+1
    if flag<3:
        print("DA")
    else:
        print("NE")
