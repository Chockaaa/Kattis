x=int(input())

for i in range(0,x):
    temp=input()

    if('=' in temp):
        print("skipped");

    if('+' in temp):
        temp=temp.split('+')
        print(int(temp[0])+int(temp[1]))
