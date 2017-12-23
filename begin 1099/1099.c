#include<stdio.h>

int main()
{
    int i, j, N, num1, num2, sum;

    scanf("%d", &N);

    for(i = 1; i <= N; i++){

        scanf("%d %d", &num1, &num2);

        if(num1 < num2){

            for(j = num1+1, sum = 0; j < num2; j++){

                if(j % 2 != 0){
                    sum = sum + j;
                }
            }
            printf("%d\n", sum);
        }

        else{

            for(j = num2+1, sum = 0; j < num1; j++){

                if(j % 2 != 0){
                    sum = sum + j;
                }
            }
            printf("%d\n", sum);
        }


    }

    return 0;
}
