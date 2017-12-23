#include<stdio.h>

int main()
{
    double dollar, taxes, per1, per2, per3;

    scanf("%lf", &dollar);

    if(dollar >= 0 && dollar <= 2000){

        printf("Isento\n");
    }

    else if(dollar >= 2000.01 && dollar <= 3000.00){

        taxes = (dollar -2000) * .08;

        printf("R$ %.2lf\n", taxes);
    }

    else if(dollar >= 3000.01 && dollar <= 4500){

        per1 = 1000 * .08;

        per2 = (dollar - 3000) * .18;

        taxes = per1 + per2;

        printf("R$ %.2lf\n", taxes);
    }

    else if(dollar >= 4500.01){

        per1 = 1000 * .08;

        per2 = 1500 * .18;

        per3 = (dollar - 4500) * .28;

        taxes = per1 + per2 + per3;

        printf("R$ %.2lf\n", taxes);
    }

    return 0;
}
