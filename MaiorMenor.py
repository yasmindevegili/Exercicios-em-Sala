n = []

for i in range(5):
     nota = float(input(f"Digite uma nota {i+1}:"))
     n.append(nota)
     
print(max(n))
print(min(n))
