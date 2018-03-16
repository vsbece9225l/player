#include<stdio.h>
int main()
{
    int n,count=0;
    int i;
    printf("\nenter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count>1)
    {
        printf("yes");
    }
    return 0;
}
