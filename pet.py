finalsum=0
for i in range(0,5):
    value=[]
    for s in input().split():
        value.append(s)

    value=[int(i) for i in value]

    count=i+1
    tempsum=0
    
    for x in value:
        tempsum=tempsum+x
    if tempsum>finalsum:
        finalsum=tempsum
        finalcount=count



print(finalcount,finalsum)
