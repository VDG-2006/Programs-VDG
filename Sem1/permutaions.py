from itertools import permutations
l=eval(input("Enter list:"))
# Using the permutations() method
myList = list(permutations(l))
# Display the Permutations
print("Permutations\n",myList)