#include<stdio.h>
int main()
{
	char str[10]="1a";
	int i;
	for(i=0;str[i]!='\0';i++)
	{
	 if(str[i]>=0&&str[i]<=9)
	    printf("yes,numeric");
	    else
	    printf("not numeric it's maybe a  string");
	}
	return 0
