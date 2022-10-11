import random
rv=random.random()
print(rv)
i=5
while(True):
    temperature=random.randint(1,100)
    print(temperature)
    if(temperature>30):
        print("the temperture is very high,ring the alarm")
    humidity=random.randint(1,100)
    print(humidity)
    if(humidity>60):
        print("the humidity is very high,ring the alarm")
