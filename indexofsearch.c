#include <stdio.h>
#include<string.h>

int main() {
	char str1[50];
	int len,i,count=0,j=0;
	char ch;
	printf("\nenter the character");
	scanf("%c",&ch);
	printf("\nenter the string:");
	scanf("%s",&str1);
	len=strlen(str1);
	for(i=0;i<len;i++)
	{
	    if(str1[i]==ch)
	    {
	        break;
	        
	    }
	}
	printf("\nindex of string is %d\n",i);
	return 0;
}

