#include<stdio.h>

int main()
{
    int num1, num2;

    while(scanf("%d %d", &num1, &num2)){

        if(num1 == num2){  // check 2 number value is equal if equal then break the loop
            break;
        }

        else{

            if(num1 < num2){         // check num1 < num2

                printf("Crescente\n");
            }

            else{                       //num1 > num2

                printf("Decrescente\n");
            }
        }
    }

    return 0;
}
