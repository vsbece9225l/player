#include<stdio.h>
int main()
{
    int n,n1[10];
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&n1[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(n1[i]+n1[j]==0)
            {
                printf("%d %d",n1[i],n1[j]);
            }
        }
    }
    return 0;
}
    
