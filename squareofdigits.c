#include<stdio.h>
int main()
{
     int num,digit;
     int square=0;
     printf("enter the number:");
     scanf("%d",&num);
     while(num!=0)
     {
         digit=num%10;
         square=square+digit*digit;
         num=num/10;
         }
         printf("the square of a number is %d",square);
         return 0;
         }
         
