n = []

for i in range(5):
     nota = float(input(f"Digite uma nota {i+1}:"))
     n.append(nota)
    
print("Maior:")
print(max(n))
print("Menor:")
print(min(n))
