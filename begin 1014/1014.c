#include<stdio.h>

int main()
{
    int km;

    double fuel, kmpl;

    scanf("%d", &km);

    scanf("%lf", &fuel);

    kmpl = km / fuel;

    printf("%.3lf km/l\n", kmpl);


    return 0;
}
