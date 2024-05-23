Write a program to calculate the factorial of a positive integer quantity (without recursion). 

#include <stdio.h>
int main()
{
    int i,num,fact=1;
    scanf("%d",&num);
    if(num<0)
    {
    }
    else
    {
        for(i=1; i<=num; i++)
        {
            fact*=i;
        }
        printf("Factorial of %d is = %d\n", num,fact);
    }
    return 0;
}


    return 0;
}
