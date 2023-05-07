lst=[0, -1, 2, -3, 1]
sum=-2
lst1=[]

for i in range(len(lst)):
    for j in range(i+1,len(lst)):
        for k in range(j+1,len(lst)):
            lst1.append((lst[k],lst[k]))
print(lst1)
