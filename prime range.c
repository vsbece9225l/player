#include<stdio.h>

int main()
{
    int l,r,i,count=0;
    printf("enter the range:");
    scanf("%d%d",&l,&r);
    for(i=l;i<=r;i++)
    {
        if(r%i==0)
        {
            count++;
        }
    }
    if(count==2)
     printf("prime number%d",r);
    else
        printf("not prime number %d",r);
    return 0;
}
