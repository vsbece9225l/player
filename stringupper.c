#include <stdio.h>
#include<string.h>

int main() {
   char str[50]="abcd efgh";
   int i;
   char temp;
   for(i=0;str[i]!=0;i++)
   {
       if(i==0)
       str[i]=toupper(str[i]);
       else if(str[i]==' ')
       str[i+1]=toupper(str[i+1]);
   }
   printf("%s",str);
	return 0;
}
