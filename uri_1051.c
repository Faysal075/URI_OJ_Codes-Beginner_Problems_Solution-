#include<stdio.h>
int main()
{
    float n;
    scanf("%f",&n);
    if(n>=0 && n<=2000)
    {
        printf("Isento\n");
    }
    else if(n>2000.01 && n<=3000)
    {
        n-=2000;
        n=(n*0.08);
        printf("R$ %0.2f\n",n);
    }
    else if(n>3000.01 && n<=4500)
    {
        n-=3000;
        n=(n*0.18)+80;
        printf("R$ %0.2f\n",n);
    }
    else if(n>=4500)
    {
        n-=4500;
        n=(n*0.28)+350;
        printf("R$ %0.2f\n",n);
    }
    return 0;
}
