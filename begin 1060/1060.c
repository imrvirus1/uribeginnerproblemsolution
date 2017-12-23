#include<stdio.h>

int main()
{
    int i, count;

    double num[6];

    for(i = 0; i <= 5; i++){

        scanf("%lf", &num[i]);

    }

    for(i = 0, count = 0; i <= 5; i++){

        if(num[i] > 0){

            count++;
        }

    }

    printf("%d valores positivos\n", count);

    return 0;
}
