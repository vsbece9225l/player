#include<stdio.h>
#include<string.h>
int main()
{
     char str[50];
     printf("enter the string:");
     scanf("%s",&str);
     int i,len,count=0,j;
     len=strlen(str);
     for(i=0;i<len;i++)
     {
         for(j=0;j<len;j++)
         {
              if(str[i]==str[j])
                  count++;
         }
         printf("\n%d",count);
         count-=count;
     }
     return 0;
}
