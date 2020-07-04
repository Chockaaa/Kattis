x=int(input())
temp=[]
for i in range(x):
    temp.append(input())

for j in temp:
    if("simon says " in j):
        print(j[10:])
    else:
        print()
