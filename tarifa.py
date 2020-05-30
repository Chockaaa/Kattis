x=int(input())
N=int(input())

maxa=range(0,N)
total=N*x
for i in maxa:
    temp=int(input())
    total=total-temp

total=total+x
print(total)
