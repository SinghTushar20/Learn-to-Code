#Study of a basic python program
#outcome: print function, declaring variables, addition of 2 values

#What is print?
#print is a predefined function.
#It takes program data and outputs to sys.stdout
#sys.stdout is a channel (stream) for data transfer between application and monitor.
print("Addition of 2 Numbers")


#variables
#Python doesnt have a specific variable declaration syntax.
#The variables get declared on first use (writing).
#On finding first use of a variable as writing, Python:
#1) Sense the datatype of the value being assigned.
#2) Reserve memory corresponding to the datatype, in applications memory space.
#3) Register the declaration (a:1000)in a symbol table (dictionary).
#4) Assign the value to the memory location.

#preset input
a = 7 #a whole number (int)
b = 10 #a whole number (int)

#process:
#read a
#read b
#perform addition generate result
#declare c to be of datatype of result
#store the result in c
c = a + b

#output
print(a , "+", b ,"=", c)
