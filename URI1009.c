#include<stdio.h>
int main()
{
    char a[30];
    double fixed_salary,own_sell,TOTAL;
    scanf("%s",a);
    scanf("%lf%lf",&fixed_salary,&own_sell);

    TOTAL = fixed_salary+(own_sell*0.15);

    printf("TOTAL = R$ %0.2lf\n",TOTAL);

    return 0;
}
