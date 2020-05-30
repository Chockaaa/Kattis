tempin=int(input())

value=[]
for s in input().split():
    value.append(s)
value=[int(i) for i in value]
temprange=range(0,tempin)
counter=0



for i in temprange:
    if value[i]<0:
        counter=counter+1


print(counter)


