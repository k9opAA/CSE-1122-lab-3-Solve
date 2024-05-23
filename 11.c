Write a program to determine whether the given positive integer N is a prime number or not. 

  
#include <stdio.h>
int main()
{
    int i,num,isprime=1;
    scanf("%d", &num);
    if (num <= 1)
    {
        isprime=0;
    }
    else
    {
        for (i=2; i*i<=num; i++)
        {
            if (num%i==0)
            {
                isprime=0;
                break;
            }
        }
    }
    if(isprime)
    {
        printf("%d is a prime number.\n",num);
    }
    else
    {
        printf("%d is not a prime number.\n",num);
    }
    return 0;
}

