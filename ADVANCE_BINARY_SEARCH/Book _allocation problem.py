def IsPossible(lst:list , m:int,mid :int):
   
    student_count=1
    
    pagesum=0
        
    for i in range(len(lst)):
            
            if(lst[i]+pagesum <= mid):
                pagesum+=lst[i]
                
            else: 
                
                student_count=student_count+1
                if(student_count>m or lst[i]>mid):
                    return False
                pagesum=lst[i]
    return True          
                
def findPages(arr: list, n=0, m=0) -> int:
    start=0
    
    end=sum(arr)
    
    mid =int((start+end)/2)
    
    ans=0

    if len(arr)<m:
        return -1
        
    else:

        while(start<=end):
            
            if(IsPossible(arr,m,mid)):
                        
                ans=mid
                end=mid-1
                #print(start,end)
            else:
                start=mid+1
            mid =int((start+end)/2)
        return ans
                    
#in this the mid will give the sum of the pages which is min because 
# if we found the possible so;ution thern we will  do  end=mid-1
#  