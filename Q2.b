//Develop a program to find factorial of a number using recursion
#include <stdio.h>
int f(int n)
{
   
   if (n==1)
   {
       return 1;
   }
    else
    {
    return n*f(n-1);    
    }
 }
 void main ()
    {
        int n;
        printf("enter number:");
        scanf("%d",&n);
        int result=f(n);
        printf("factorial is %d",result);
    }    
    
