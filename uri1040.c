#include<stdio.h>
int main()
{
    double N1, N2, N3, N4, N5, x,y;
    scanf("%lf%lf%lf%lf", &N1,&N2,&N3,&N4);
    x=((N1*2)+(N2*3)+(N3*4)+N4)/10;
    printf("Media: %0.1lf\n",x);
    if(x>=7)
        printf("Aluno aprovado.\n");
    else if(x<5)
        printf("Aluno reprovado.\n");
    else if(x>=5 && x<=6.9)
    {
        printf("Aluno em exame.\n");

        scanf("%lf",&N5);
        printf("Nota do exame: %0.1lf" ,N5);

        y=(N5+x)/2;
        if(y>=5)
             printf("Aluno aprovado.\n");
        else if(y<=4.9)
             printf("Aluno reprovado.\n");
        printf("Media final: %0.1lf\n",y);
    }
    return 0;

}
