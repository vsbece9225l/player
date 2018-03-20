#include<stdio.h>
int main()
{
    char str[50]="1a";
    int i=0;
    printf("\nenter the string:");
    scanf("%s",&str);
    if(str[i]>'0'&&str[i]<='9')
        printf("numeric not string");
        else
           printf("perfect string");
    
    return 0;
}
