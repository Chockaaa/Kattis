
value=[]
for s in input().split():
    value.append(s)
value=[int(i) for i in value]

sam=range(0,6)


temp=value[0]-1
value[0]=-temp

temp=value[1]-1
value[1]=-temp

temp=value[2]-2
value[2]=-temp

temp=value[3]-2
value[3]=-temp

temp=value[4]-2
value[4]=-temp

temp=value[5]-8
value[5]=-temp

for i in sam:
    print(value[i])