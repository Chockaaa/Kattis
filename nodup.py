value=[]

for x in input().split():
    value.append(x)
flag=0
for x in range(0,len(value)):
    for y in range(x+1, len(value)):
        if value[x]==value[y]:
            print("no")
            flag=1
        if flag==1:
            break;
    if flag==1:
        break
            

if flag==0:
    print("yes")
                  
