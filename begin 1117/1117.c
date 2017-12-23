#include<stdio.h>

int main()
{
    double X, Y;

    double average;

    while(scanf("%lf %lf", &X, &Y)){

        if(X < 0 || X > 10){

            printf("nota invalida\n");
        }

        else if(X < 0 || X > 10){

            printf("nota invalida\n");
        }

        if(X >= 0 && X <= 10 && Y >= 0 && Y <= 10){

            average = (X + Y) / 2;

            printf("%.2lf\n", average);

            break;
        }
    }

    return 0;
}
