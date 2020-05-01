#include<stdio.h>
#include<string.h>
int main()
{
    char a[40],b[40],c[40];
    char a1[]="vertebrado",a11[]="ave",a12[]="carnivoro",a13[]="onivoro";
    char a21[]="mamifero",a22[]="onivoro",a23[]="harbivoro";
    char b1[]="invertebrado",b11[]="inseto",b12[]="hematofago",b13[]="herbivoro";
    char b21[]="anelido",b22[]="hematofagao",b23[]="onivoro";
    char d[]="aguia",e[]="pomba",f[]="homem",g[]="vaca",h[]="pulga",i[]="lagarta",j[]="sanguessuga",k[]="minhoca";

    scanf("%s",a);

    if(0 == strcmp(a,a1))
    {
        scanf("%s",b);

        if(0 == strcmp(b,a11))

            scanf("%s",c);
        {
            if(0 == strcmp(c,a12))
                printf("%s\n",d);

            else if(0 == strcmp(c,a21))
                printf("%s\n",e);
        }
        if(0 == strcmp(b,a21))
        {
            scanf("%s",c);
            if(0 == strcmp(c,a22))

                printf("%s\n",f);
            else if(0 == strcmp(c,a23))
                printf("%s\n",g);
        }
    }
    else if(0 == strcmp(a,b1))
    {
        scanf("%s",b);
        if(0 == strcmp(b,b11))
        {
            scanf("%s",c);

            if(0 == strcmp(c,b12))
                printf("%s\n",h);

            else if(0 == strcmp(c,b13))
                printf("%s\n",i);
        }
        if(0 == strcmp(b,21))
        {
            scanf("%s",c);

            if(0 == strcmp(c,b22))
                printf("%s\n",j);

            else if(0 == strcmp(c,b23))
                printf("%s\n",k);
        }

    }
    return 0;

}
