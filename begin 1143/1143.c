#include<stdio.h>

int main()
{
    int num, i, j;

    scanf("%d", &num);

    for(i = 1; i <= num; i++){

        for(j = i; j <= i*i*i; ){

            printf("%d %d %d", j, j*j , j*j*j);  //here i print 1,1,1 .. 2,4,8, .. 3,9,27..... series
            break;
        }
        printf("\n");
    }

    return 0;
}
