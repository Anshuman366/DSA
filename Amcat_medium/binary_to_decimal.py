def decimal_to_binary(num):

    """ Function to convert decimal to binary"""
    lst=[]
    #calculation quotient

    quotient=int(num/2)
    #appending first remainder to the list

    lst.append(num%2)
    print(quotient)
    str1=" "

    #running this loop till till the quotient become 1

    while(quotient!=1):
        print("Quotient is: ",quotient)

        #calculating remainder
        rem=quotient%2
        print(rem)

        #appending remainder to the list
        lst.append(rem)

        #updating the quotient value
        quotient=int(quotient/2)
    
    # we also have to add the last remainder that means when the quotient become 1
    if quotient==1:
        lst.append(quotient)
    
    #we also need to print the list in reverse order
    for i in lst[::-1]:
        str1=str1+str(i)
    return int(str1)


lst=decimal_to_binary(19)
print(lst)