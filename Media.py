n = []
soma = 0
for i in range(3):
    n+=[float(input(f"Digite uma nota {i+1}:"))]
    soma += n[i]

media = soma/(i+1)
print(f"Media = {media:10.2f}")
    
