/*ou must make a program that read a float-point number and print a message saying in which of following
intervals the number belongs: [0,25] (25,50], (50,75], (75,100]. If the read number is less than zero or
greather than 100, the program must print the message �Fora de intervalo� that means "Out of Interval".*/
#include<stdio.h>
int main()
{
    float a;

    scanf("%f",&a);

        if(a>=0 && a<=25.0000)
            printf("Intervalo [0,25]\n");
        else if(a>25.00001 && a<=50.0000000)
            printf("Intervalo (25,50]\n");
        else if(a>50.00000001 && a<=75.0000000)
            printf("Intervalo (50,75]\n");
        else if(a>75.00000001 && a<=100.0000000)
            printf("Intervalo (75,100]\n");
        else

            printf("Fora de intervalo\n");

    return 0;
}


