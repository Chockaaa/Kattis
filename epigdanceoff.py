value=[]

for x in input().split():
    value.append(x)

value=[int(n) for n in value]
row=value[0]
column=value[1]

draw=[]
for x in range(0,row):
    draw.append(input())
    
for x in range(0,row):
    draw[x]=list(draw[x])
    
moves=0
    
for y in range(0,column):
    flag=0
    for x in range(0,row):
        if draw[x][y]=="_":
            flag+=1
    if flag==row:
        moves+=1
    

moves=moves+1
print(moves)         
         
