B2=[39877,31319,39869]
for i in range(3):
    c=[1]
    for j in range(2,B2[i]):
        if(B2[i]%j!=0):
            c.append(j)
    print(c)
