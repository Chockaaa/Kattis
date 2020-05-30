value=[]
for s in input().split('-'):
        value.append(s)

display=""
for x in range(0,len(value)):
    display=display+value[x][0]

print(display)
