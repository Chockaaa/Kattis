value=[]

for s in input().split():
    value.append(s)

value=[int(i) for i in value]

total=(value[0]*value[1])-value[0]+1
print(total)
