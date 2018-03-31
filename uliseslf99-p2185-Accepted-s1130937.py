'''
Created on 04/09/2017

@author: Ulises
'''
a = raw_input()
space = a.index(" ")
dot = a.find(".")
if dot >= 0:
    dot2 = a.find(".", dot + 1)

if space >= 0 and dot >= 0 and dot2 > dot:
    b = []
    b.append(float(a[:space]))
    b.append(float(a[space + 1:]))
    print b[0] + b[1]
    print b[0] - b[1]
    print b[0] * b[1]
    print b[0] / b[1]
    print b[0] % b[1]
elif space >= 0 and dot >= 0 and dot > space:
    b = []
    b.append(int(a[:space]))
    b.append(float(a[space + 1:]))
    print b[0] + b[1]
    print b[0] - b[1]
    print b[0] * b[1]
    print b[0] / b[1]
    print b[0] % b[1]
elif space >= 0 and dot >= 0 and dot < space:
    b = []
    b.append(float(a[:space]))
    b.append(int(a[space + 1:]))
    print b[0] + b[1]
    print b[0] - b[1]
    print b[0] * b[1]
    print b[0] / b[1]
    print b[0] % b[1]
elif space >= 0 and dot < 0:
    b = []
    b.append(int(a[:space]))
    b.append(int(a[space + 1:]))
    print b[0] + b[1]
    print b[0] - b[1]
    print b[0] * b[1]
    print b[0] / b[1]
    print b[0] % b[1]
