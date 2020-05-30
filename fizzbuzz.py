value=[]

for x in input().split():
    value.append(x)

value=[int(i) for i in value]


for x in range(1,value[2]+1):
    flag=0
    if x%value[0]==0:
        if x%value[1]==0:
            print("FizzBuzz")
            flag+=1
        else:
            print("Fizz")
            flag+=1

    if flag==0:
        if x%value[1]==0:
            print("Buzz")
        else:
            print(x)
