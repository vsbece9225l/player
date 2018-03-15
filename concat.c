#include<stdio.h>
#include<string.h>
int main()
{
     char str[50];
     printf("\nenter the string:");
     scanf("%d",&str);
     char str1[50],temp;
     int i,j,len;
     len=strlen(str);
     for(i=0;i<len;i++)
     {
         if(str[i]!=' ')
         {
             temp=str[i];
             str1[j]=temp;
             j++;
             
         }
         
     }
     str[j]='\0';
     
     printf("%s",str1);
     return 0;
}
     
