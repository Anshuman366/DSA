# def decimal_to_octal(num):

#     """ Function to convert decimal to octal"""

#     quotient=int(num/8)
#     print("Quotient is :",quotient)
#     lst=[]
#     lst.append(num%8)
#     str1=" "
#     while(quotient>8):
#         rem=quotient%8
#         print("rem is: ",rem)
#         lst.append(rem)
#         quotient=int(quotient/8)
#     lst.append(quotient)
#     for i in lst[::-1]:
#         str1=str1+str(i)
#     print("List is  : ",lst)
#     print(int(str1))

# decimal_to_octal(7562)

########################################### METHOD 2 #################################################

def decimal_to_octal(decimal):
    octal = 0

    i = 1
    while (decimal != 0):
        print("i is : ",i)
        print("octal is ",octal)
        octal = octal + (decimal % 8) * i # at this step we are using place value system for the calculations
        print("octal new  is ",octal)
        decimal = int(decimal / 8)
        i = i * 10

    return octal

decimal = int(input("Enter the decimal number : "))
print("Equivalent octal number : ",decimal_to_octal(decimal))

