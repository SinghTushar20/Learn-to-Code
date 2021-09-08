#Program to find the greater of 4 numbers
#Refer: Conditional Branching.txt and Merging Conditions.txt
#Analyze the comments

a = int(input('Enter number 1 '))
b = int(input('Enter number 2 '))
c = int(input('Enter number 3 '))
d = int(input('Enter number 4 '))

if a == b and a == c and a == d: # are all equal
    print('All the numbers are: ',a)
elif a > b and a > c and a > d: # is a greater than b,c,d
    print(a, 'is the greatest number')
elif b > c and b > d: # is b greater than c and d
    print(b, 'is the greatest number')
elif c > d: # is c greater than d
    print(c, 'is the greatest number')
else: #no comparison required
    print(d, ' d is the greatest number')


#FYI
# input() is used to accept values from keyboard
# the data is receive in string (text) form
# it may be converted to required form for further use

# int(string) attempt to convert the given string into an int (whole number).
# When conversion is successful, an int value is returned.
# When conversion fails, a ValueError is raised.