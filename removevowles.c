#include<stdio.h>
#include<string.h>

int main(){
    char str[50]="sundar";
    char str1[50];
    char temp;
    int i,j=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u')
        {
            temp=str[i];
            str1[j++]=temp;
        }
    }
    printf("the  vowel removed string is %s",str1);
    printf("the reversed string is %s",strrev(str1));
    return 0;
}
