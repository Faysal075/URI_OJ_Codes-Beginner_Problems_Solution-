/*Using the following table, write a program that reads a code and the amount of an item.
After, print the value to pay. This is a very simple program with the only intention of practice of
selection commands.*/
#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);

    double a;

    if(x==1)
       {
        a=y*4.00;
        printf("Total: R$ %.2lf\n",a);
       }
       else if(x==2)
       {
        a=y*4.50;
        printf("Total: R$ %.2lf\n",a);
       }

    else if(x==3)
    {
        a=y*5.00;
        printf("Total: R$ %.2lf\n",a);
    }

    else if(x==4)
    {
        a=y*2.00;
        printf("Total: R$ %.2lf\n",a);
    }

    else if(x==5)
    {
        a=y*1.50;
        printf("Total: R$ %.2lf\n",a);
    }


        return 0;

}



