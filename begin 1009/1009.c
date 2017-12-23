#include<stdio.h>
#include<string.h>

int main()
{
    char name[1000];

    double salary, sold, total;

    gets(name);

    scanf("%lf%lf", &salary, &sold);

    total = salary + (sold * .15);

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
