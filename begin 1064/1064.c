#include<stdio.h>

int main()
{
    int i, count;

    double num[6], average;

    for(i = 0; i <= 5; i++){

        scanf("%lf", &num[i]);

    }

    for(i = 0, count = 0, average = 0; i <= 5; i++){

        if(num[i] > 0){

            count++;

            average = average + num[i];
        }



    }

    printf("%d valores positivos\n", count);

    printf("%.1lf\n", average/count );

    return 0;
}
