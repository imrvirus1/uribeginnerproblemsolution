#include<stdio.h>

int main()
{
    int i, num[5], count;

    for(i = 0; i < 5; i++){

        scanf("%d", &num[i]);
    }

    for(i = 0, count = 0; i < 5; i ++){

        if(num[i] % 2 == 0){

            count++;
        }
    }

    printf("%d valores pares\n", count);


    return 0;
}
