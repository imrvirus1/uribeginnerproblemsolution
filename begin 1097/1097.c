#include<stdio.h>

int main()
{
    int i, j, k;

    for(i = 1; i < 10; i = i + 2){

        for(j = i + 6, k = 3; k >= 1; j--, k--){

            printf("I=%d J=%d\n", i, j);
        }
    }

    return 0;
}
