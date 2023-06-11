arr=[1,1,2,2,3,4,4]


#problem_link="https://www.codingninjas.com/codestudio/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=0"
def findUnique(arr) :
     dict1={}
     for i in arr:
         dict1[i]=arr.count(i)
     print(dict1)
     for i,j in dict1.items():
         if j==1:
             print(i)

findUnique(arr)\






