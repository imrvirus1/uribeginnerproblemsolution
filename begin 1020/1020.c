#include<stdio.h>

int main()
{
    int N, day, month, year;

    scanf("%d", &N);

    if(N < 30){

        year = 0;

        month = 0;

        day = N;

        printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, day);
    }

    else if(N > 30 && N < 365){

        year = 0;

        month = N / 30;

        day = N - (month * 30);

        printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, day);
    }

    else {

        year = N / 365;

        month = (N -(year * 365)) / 30;

        day = N - ((year * 365) + (month * 30));

        printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, day);
    }

    return 0;
}
