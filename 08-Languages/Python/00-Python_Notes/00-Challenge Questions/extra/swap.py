# Python script to swap 2 numbers

a = 10 # variable a set to value 10
b = 20 # variable b set to value 20

print(a, b) # 10 20

#approach 1:
c = a #backup data of a in c (temporary variable)
a = b #transfer data of b in a (a overwritten)
b = c #transfer data of c (backup of a) in b

#approach 2:
#a = a + b # a is set to 30
#b = a - b # b is set to 10
#a = a - b # a is set to 20

print(a,b) # 20 10
