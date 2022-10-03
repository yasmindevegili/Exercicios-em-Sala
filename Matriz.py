n = []
soma = 0
for i in range(3):
  n+= [float(input(f"Digite a nota {i+1}:"))]
  soma+=n[i]
media = soma / i
print(f"Média = {media:4.2f}")
import numpy as np
n = np.array([[8,6,7],[3,5,10],[9,2,7]])
print(n.max(), n.min())
print (n.mean(axis=1))
print (n)
