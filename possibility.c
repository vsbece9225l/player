#include <stdio.h>

int main() {
	int i,n,a[50],j,k,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	     for(k=j+1;k<n;k++)
	     {
	         if(a[i]<a[j]<a[k])
	         {
	             sum=a[i]+a[j];
	             if(sum==a[k])
	             {
	                 printf("%d%d%d",a[i],a[j],a[k]);
	             }
	         }
	         printf("\n");
	         sum=0;
	     }
	    }
	}
	return 0;
}
