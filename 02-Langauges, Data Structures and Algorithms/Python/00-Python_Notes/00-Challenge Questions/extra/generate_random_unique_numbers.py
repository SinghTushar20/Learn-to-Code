#10 random yet unqiue nos in range (1-1000)
import  random
data= []
i = 1
while i < 11:
    x = random.randint(1,1000)
    #look for x in the list
    if x not in data: #unique
        data.append(x) #add
        i+=1

print(data)