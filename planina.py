n=int(input())

angle=range(1,n)
x=3


for i in angle:
    x=x + (2**i)
    
t=x**2
print(t)