#include<stdio.h>

int main()
{
    int number, month;
    double pay, salary;

    scanf("%d%d", &number, &month);

    scanf("%lf", &pay);

    salary = month * pay;

    printf("NUMBER = %d\n", number);

    printf("SALARY = U$ %.2lf\n", salary);

    return 0;
}
