value=int(input())
bank=[]
while(value>0):
    bank.append(str(value%2))
    value=value//2
bankk=""
bankk=int(bankk.join(bank))
count=0
total=0
while(bankk>0):
    temp=bankk%10
    total+=temp*pow(2,count)
    count+=1
    bankk=bankk//10

    
print(total)
