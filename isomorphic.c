#include<stdio.h>
#include<string.h>
int main()
{
     char str[50]="aab";
     char str1[50]="xxy";
     int len,len1,i,j,count,count1;
     char iso,iso2;
     len=strlen(str);
     len1=strlen(str1);
     if(len==len1)
     {
         printf("\nit is isomorphic");
         
     }
     iso=str[i];
     iso2=str1[i];
     for(i=0;str[i]!='\0';i++)
     {
         if(str[i]==iso)
         {
             count++;
         }
     }
     for(j=0;str1[j]!='\0';j++)
     {
         if(str1[j]==iso2)
         {
             count1++;
         }
     }
     printf("%d\n",count);
     printf("%d\n",count1);
     
     return 0;
}
