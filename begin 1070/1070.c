#include<stdio.h>

int main()
{
    int i, X, count= 0;

    scanf("%d", &X);

    for(i = X; count < 6; i++){

        if(i % 2 != 0){

            printf("%d\n", i);

            count++;
        }
    }

    return 0;
}
