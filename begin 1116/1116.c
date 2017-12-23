#include<stdio.h>

int main()
{
    int i, N, num1, num2;

    double result;

    scanf("%d", &N);    //input the test case

    for(i = 1; i <= N; i++){

        scanf("%d %d", &num1, &num2);    //here input 2 number

        if(num2 == 0){      //if num2 == 0 then divide impossible because n/0 is not possible

            printf("divisao impossivel\n");
        }

        else{

            result = (double) num1 / num2;    //cast integer value to double value by (double)

            printf("%.1lf\n", result);
        }
    }

    return 0;
}
