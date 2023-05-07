# program to check weather the digit of the number raise to its respective index 
#is equal to the sum of the digit or not
a=int(input("Please enter the number"))
num=a
lst=[i for i in str(num)]
print(lst)
sum=0
for i in range(1,len(lst)+1):
    #print(i)
    #print(int(lst[i-1])**i)
    sum=sum+int(lst[i-1])**i
if sum==a:
    print("yes")
else:
    print("No")

