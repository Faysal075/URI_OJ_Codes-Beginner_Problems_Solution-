#include<stdio.h>
int main()
{
    int n,i,b;
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        b=i*n;
        printf("%d * %d = %d\n",i,n,b);
    }
    return 0;
}
