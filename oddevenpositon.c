#include <stdio.h>
#include<string.h>

int main() {
   char str[50]="abcd";
   int i;
   char temp;
   for(i=0;str[i]!=0;i++)
   {
       temp=str[i];
       str[i]=str[i+1];
       str[i+1]=temp;
   }
   printf("%s",str);
	return 0;
}
