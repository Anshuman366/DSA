lst=[1,2,3,4,4,5,6,6]
lst1=[]
for i in lst :
    if i not in lst1:
        lst1.append(i)
    else:
        print(i)