#include<stdio.h>
int main()
{
    float a,b,c;
    double TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO,pi=3.14159;

    scanf("%f%f%f",&a,&b,&c);

    TRIANGULO=0.5*a*c;
    CIRCULO=pi*c*c;
    TRAPEZIO=0.5*(a+b)*c;
    QUADRADO=b*b;
    RETANGULO=a*b;

    printf("TRIANGULO: %0.3lf\nCIRCULO: %0.3lf\nTRAPEZIO: %0.3lf\nQUADRADO: %0.3lf\nRETANGULO: %0.3lf\n",TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO);

    return 0;
}
