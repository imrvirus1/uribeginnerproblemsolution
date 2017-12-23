#include<stdio.h>

int main()
{
    int hour, km;

    double fuel;

    scanf("%d%d", &hour, &km);

    fuel = (hour * km) / 12.0;

    printf("%.3lf\n", fuel);

    return 0;
}
