#include<stdio.h>
int main()
{
   double R,volume,pi=3.14159;
    scanf("%lf",&R);

    volume=(4.0/3)*pi*(R*R*R);

    printf("VOLUME = %0.3lf\n",volume);

    return 0;
}
