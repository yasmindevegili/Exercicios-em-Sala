#exercicios com metodos de listas em python

colors = ["Yellow", "Purple", "Orange"]
print(colors)

#append
colors.append("Red")
print(colors)

#copy
y = colors.copy()
print(y)

#clear
y.clear()
print(y)

#count
count = colors.count('Red')
print(count)

#extend
fruits = ["Banana", "Apple"]
colors.extend(fruits)
print(colors)

#index
index = colors.index("Banana")
print(index)

#insert
colors.insert(2, "Blue")
print(colors)

#pop
colors.pop(2)
print(colors)

#remove
colors.remove("Banana")
print(colors)

#reverse
colors.reverse()
print(colors)

#sort
colors.sort()
print(colors)
