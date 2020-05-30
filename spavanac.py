value=[]

for s in input().split():
    value.append(s)

value=[int(i) for i in value]

hours=value[0]
minutes=value[1]

minutes=minutes-45

if(minutes<0):
    minutes=60+minutes
    hours=hours-1

if(hours<0):
    hours=24+hours

print(hours,minutes)
