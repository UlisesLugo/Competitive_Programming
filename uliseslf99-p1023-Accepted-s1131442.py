'''
Created on 06/09/2017

@author: Ulises
'''
a = []
contador = 0.0

for i in range(12):
    x = input()
    a.append(x)
    contador += float(a[i])
promedio = contador / 12
print "$%3.2f" % (promedio)
