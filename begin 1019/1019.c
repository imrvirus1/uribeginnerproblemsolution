#include<stdio.h>

int main()
{
    int N, hours, minute, second;

    scanf("%d", &N);

    if(N < 60){

       hours = 0;

       minute = 0;

       second = N;

       printf("%d:%d:%d\n", hours, minute, second);

    }

    else if(N > 60 && N < 3600){

        hours = 0;

        minute = N / 60;

        second = N - (60 * minute);

        printf("%d:%d:%d\n", hours , minute, second);

    }

    else{

        hours = N / 3600;

        minute = (N - (hours * 3600)) / 60;

        second = N - ((hours * 3600) + (minute * 60));

        printf("%d:%d:%d\n", hours, minute, second);
    }

    return 0;
}
