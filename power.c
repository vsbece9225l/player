#include<stdio.h>
int  main()
{
    int n,k,i;
    printf("enter the number");
    scanf("%d",&n);
    printf("enter the k value");
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        if(k*i==n)
        {
            printf("yes,power of k");
        }
    }
    return 0;
}
