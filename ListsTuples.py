#estruturas de dados básicas de python

#listas
x = []
print(f"O tipo de x eh:{type(x)}")

y = list()
print(f"O tipo de y eh:{type(y)}")

print(f"x eh igual a y? {x==y}")

#listas iguais
x = [1,2,3]
y = [1,3,2]
z = [1,2,3]
print(f"{x} é igual a {y}?{y==x}")
print(f"{x} é igual a {z}?{z==x}")
print(f"{y} é igual a {z}?{y==z}")

#acessando elementos
x = list(range(1,21))
print (x)
print (x[0])
print (x[-1])

#invertendo listas
print (x[::-1])

#do primeiro ao quinto
print (x[0:5])

#último 5 elementos
print (x[-5:])

#imprimindo de forma invertida
print (x[-1:-6:-1])

#valores pares
print (x[1::2])
