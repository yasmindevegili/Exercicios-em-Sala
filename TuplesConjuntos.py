#Tuples
t = tuple()
u = ()
print(type(t), type(u))
print(f"Valor booleano de uma tupla {bool(u)}")

t = tuple(range(5))
print(t)

#Conjuntos
A = set([1,'a',2,'b'])
B = set([1,1,1,2,2,2,'a','b','a'])
print(f"Conjunto A:{A} e o conjunto B:{B}")
print(f"A eh igual a B?{(A==B)}")

A = {1, 2, "a"}
B = {6, 3, 2}
print(A.intersection(B))
print(A.union(B))
print(A.difference(B))
print(B.difference(A))
