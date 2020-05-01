#include<stdio.h>
int main()
{
    int h1,h2,m1,m2,c,h,m;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    if(h1==h2 && m1==m2)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
    {
        if(h2>h1 && m2>m1)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(h2-h1),(m2-m1));
        }
        else if(h2>h1 && m2<m1)
        {
            c=1;
            m=(m2+60)-m1;
            h=h2-(h1+c);
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);

        }
        else if(h2==h1 && m2<m1)
        {
            c=1;
            m=(m2+60)-m1;
            h=(24+h2)-(h1+c);
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
        }
        else if(h2==h1 && m2>m1)
        {
            h=0;
            m=m2-m1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
        }
        else if(h2>h1 && m2==m1)
        {
            m=0;
            h=h2-h1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
        }
        else if(h2<h1 && m1==m2)
        {
            m=0;
            h=(h2+24)-h1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
        }
        else if(h2<h1 && m2>m1)
        {
            m=m2-m1;
            h=(h2+24)-h1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);

        }
        else if(h2<h1 && m2<m1)
        {
            c=1;
            m=(m2+60)-m1;
            h=(h2+24)-(h1+c);
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);

        }

    }
    return 0;
}
