#include <stdio.h>

int main() {
	char str[50]="aax";
	char str1[50]="aay";
	int i;
	for(i=0;str[i]!='\0';i++)
	{
	    if(str[i]!=str1[i])
	    {
	        printf("\nyes,one character of the string is differ");
	    }
	}
	return 0;
}
