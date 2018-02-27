include<stdio.h>
int sum(int,int);
int divisor(int);
int main()
{
    int x,y,c,d,f;
    printf("\nenter the value of a&b");
    scanf("%d%d",&x,&y);
    printf("\nenter the value of a&b");
    d=sum(x,y);
    printf("%d",d);
    f=divisor(d);
    printf("yes,it may divisible  %d",f);
    return 0;
}
int sum(int r,int p)
{
    if(r>p)
    return p;
    else
    return r;
}
int divisor(int g)
{
    int x,y;
    if(g%x==0&&g%y==0)
       return g;
}
