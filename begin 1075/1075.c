#include<stdio.h>

int main()
{
    int N, i;

    scanf("%d", &N);

    if(N < 10000){

        for(i = 2; i < 10000; i++){

            if(i % N == 0){
                i = i + 2;

            }
            printf("%d\n", i);

        }
    }

    return 0;
}
