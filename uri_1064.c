#include<stdio.h>
int main()
{
    float a,b,d=0;
    int c=0;
    for(a=1; a<=6; a++)
    {
        scanf("%f",&b);
        if(b>0)
        {
            c++;
            d=d+b;
        }
    }
    printf("%d valores positivos\n%0.1f\n",c,d/c);
    return 0;
}
