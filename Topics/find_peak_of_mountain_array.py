arr = [0,2,1,0]
dict1={}

for i in range(len(arr)):
    dict1[arr[i]]=i
print(dict1)
lst_sorted=sorted(dict1.items())
print(lst_sorted[-1][1])
