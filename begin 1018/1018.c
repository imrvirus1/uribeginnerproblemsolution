#include<stdio.h>

int main()
{
    int N, not100, not50, not20, not10, not5, not2,  not1;

    scanf("%d", &N);



     if( N > 0 && N < 1000000){

// calculation of all possible note 100, 50, 20, 10, 5, 2, 1

            not100 = N / 100;

            not50 = (N - (not100 * 100) ) / 50;

            not20 = (N - ( (not100 * 100)+ (not50 * 50) ) ) / 20;

            not10 = (N - ( (not100 * 100) + (not50 * 50)+(not20 * 20) ) ) / 10;

            not5 = (N - ( (not100 * 100) + (not50 * 50) + (not20 * 20) + (not10 * 10) ) ) / 5;

            not2 = ( N - ( (not100 * 100) + (not50 * 50) + (not20 * 20)+ (not10 * 10) + (not5 * 5) ) ) / 2;

            not1 = (N - ( (not100 * 100) + (not50 * 50) + (not20 * 20) + (not10 * 10) + (not5 * 5) + (not2 * 2) ) );


// output of all possible note 100, 50, 20, 10, 5, 2, 1

        printf("%d nota(s) de R$ 100,00\n", not100);

        printf("%d nota(s) de R$ 50,00\n", not50);

        printf("%d nota(s) de R$ 20,00\n", not20);

        printf("%d nota(s) de R$ 10,00\n", not10);

        printf("%d nota(s) de R$ 5,00\n", not5);

        printf("%d nota(s) de R$ 2,00\n", not2);

        printf("%d nota(s) de R$ 1,00\n", not1);

     }


    return 0;

}
