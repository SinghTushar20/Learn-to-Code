#Reverse a list
#see: list_reverse.png

def reverse_list(lst):
    x = 0 # lower boundary
    y = len(lst)-1 #upper boundary

    while x < y: #until the boundaries cross
        #swap
        temp = lst[x]
        lst[x] = lst[y]
        lst[y] = temp

        x+=1 #lower boundary increases
        y-=1 #upper boundary decreases

    #This function receives a list as parameter and processes it.
    #Know that when a list is shared as parameter then the actual and formal parameters
    #refer to the same list (memory). Hence updates are made to the common memory.
    #This approach to data sharing between the caller and the called function is called
    #as Pass by reference.


data = [10,20,30,40,50]
print(data)
reverse_list(data)
print(data)