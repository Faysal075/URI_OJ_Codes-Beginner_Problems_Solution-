#include<stdio.h>
int main()
{
    int NUMBER,working_hour;
    float payment;
    double SALARY;

    scanf("%d%d%f",&NUMBER,&working_hour,&payment);

    SALARY = payment*working_hour;

    printf("NUMBER = %d\nSALARY = U$ %0.2lf\n",NUMBER,SALARY);

    return 0;
}
