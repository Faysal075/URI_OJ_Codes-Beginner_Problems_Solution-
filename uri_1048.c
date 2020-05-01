#include<stdio.h>
int main()
{
    float n,a,b;
    int c;
    char ch = '%';
    scanf("%f",&n);
    if(n >=0 && n <= 400.00)
    {
        a = n+n*0.15;
        b = n*0.15;
        c = 15;
    }
    else if(n >= 400.01 && n <= 800.00)
    {
        a = n+n*0.12;
        b = n*0.12;
        c = 12;
    }
    else if(n >= 800.01 && n <= 1200.00)
    {
        a = n+n*0.1;
        b = n*0.1;
        c = 10;
    }
    else if(n >= 1200.01 && n <= 2000.00)
    {
        a = n+n*0.07;
        b = n*0.07;
        c = 7;
    }
    else if(n > 2000)
    {
        a = n+n*0.04;
        b = n*0.04;
        c = 4;
    }
    printf("Novo salario: %0.2f\n",a);
    printf("Reajuste ganho: %0.2f\n",b);
    printf("Em percentual: %d%c\n",c,ch);
    return 0;
}
