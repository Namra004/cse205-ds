question 1
class Solution(object):
    def sum(self, num1, num2):
        # num1 =12
        # num2 =5
        num3 =num1 +num2
        return(num3)

 question 2
 class Solution(object):
    def smallestEvenMultiple(self, n):
        if n%2== 0:
            return(n)
        else:
             return(n*2)

question 3
lass Solution(object):
    def sumOfMultiples(self, n):
        sum =0
        for i in range(1,n+1):
            a=i
            i+=1
            if a%3 ==0:
                sum+=a
            elif a%5==0:
                sum+=a
            elif a%7==0:
                sum+=a
       
        return(sum)                                    