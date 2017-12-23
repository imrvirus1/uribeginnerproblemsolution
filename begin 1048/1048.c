#include<stdio.h>

int main()
{
    double salary;

    scanf("%lf", &salary);

    char persnt = '%';

    if( salary >= 0 && salary <= 400.00){

        printf("Novo salario: %.2lf\n", salary +(salary * .15) );

        printf("Reajuste ganho: %.2lf\n", salary * .15 );

        printf("Em percentual: 15 %c\n", persnt);
    }

    else if(salary >= 400.01 && salary <= 800.00){

        printf("Novo salario: %.2lf\n", salary + (salary * .12) );

        printf("Reajuste ganho: %.2lf\n", salary * .12 );

        printf("Em percentual: 12 %c\n", persnt);
    }

    else if(salary >= 800.01 && salary <= 1200.00){

        printf("Novo salario: %.2lf\n", salary + (salary * .10) );

        printf("Reajuste ganho: %.2lf\n", salary * .10 );

        printf("Em percentual: 10 %c\n", persnt);

    }

    else if(salary >= 1200.01 && salary <= 2000.00){

        printf("Novo salario: %.2lf\n", salary + (salary * .07) );

        printf("Reajuste ganho: %.2lf\n", salary * .07 );

        printf("Em percentual: 7 %c\n", persnt);

    }

    else if(salary > 2000){

        printf("Novo salario: %.2lf\n", salary + (salary * .04) );

        printf("Reajuste ganho: %.2lf\n", salary * .04 );

        printf("Em percentual: 4 %c\n", persnt);

    }

    return 0;
}
