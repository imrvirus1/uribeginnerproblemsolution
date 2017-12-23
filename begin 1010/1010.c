#include<stdio.h>

int main()
{
    int i, code1, code2, unit1, unit2;

    double price1, price2, total;

    scanf("%d%d", &code1, &unit1);

    scanf("%lf", &price1);

    scanf("%d%d", &code2, &unit2);

    scanf("%lf", &price2);

    total = (unit1 * price1) + (unit2 * price2);

    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}
