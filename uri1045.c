#include<stdio.h>
int main()
{
    double a,b,c,d,e,f;
    scanf("%lf%lf%lf",&a,&b,&c);
    d = a*a;
    e = b*b;
    f = c*c;
    if(a>=b+c)
        printf("NAO FORMA TRIANGULO\n");
    if(d==(e+f))
        printf("TRIANGULO RETANGULO\n");
    if(d>(e+f))
        printf("TRIANGULO OBTUSANGULO\n");
    if(d<(e+f))
        printf("TRIANGULO ACUTANGULO\n");
    if(a==b &&a==c)
        printf("TRIANGULO EQUILATERO\n");
    else if(a==b || b==c || a==c)
        printf("TRIANGULO ISOSCELES\n");
    return 0;

}
