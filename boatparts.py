x=input().split()

for i in range(len(x)):
    x[i]=int(x[i])

samp=[]
flag=0
for i in range(x[1]):
    temp=input()
    if(temp not in samp):
        samp.append(temp)

    if(len(samp)==x[0]):
        flag=i+1
        samp.append("a")

if(flag==0):
    print("paradox avoided")
else:
    print(flag)
