n=int(input())
total=1
value=[]
for x in range(0,n):
    temp=int(input())
    total=1
    for x in range(0,temp):
        total=total*(x+1)
    value.append(total%10)

for x in range(0,n):
    print(value[x])
