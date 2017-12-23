#include<stdio.h>

int main()
{
    int num1, num2, i, sum;

    scanf("%d %d", &num1, &num2);

    if(num1 < num2){    //when num1 < num2 running this loop and first num1 and i < num2

        for(i = num1, sum = 0; i <= num2; i = i + 1){

            if(i % 13 == 0){
                continue;
            }

            sum = sum + i;
        }
    }

    else{           //when num1 > num2 running this loop and first num2 and i < num1

        for(i = num2, sum = 0; i <= num1; i = i + 1){

            if(i % 13 == 0){
                continue;
            }

            sum = sum + i;
        }

    }

    printf("%d\n", sum);

    return 0;
}
