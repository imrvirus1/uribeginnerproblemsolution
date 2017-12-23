#include<stdio.h>

int main()
{
    int num, alco = 0, gas = 0, disel = 0;

    while(scanf("%d", &num)){

        if(num == 4){
            break;
        }

        else if(num == 1){
            alco++;
        }
        else if(num == 2){
            gas++;
        }
        else if(num == 3){
            disel++;
        }
    }

    printf("MUITO OBRIGADO\n");

    printf("Alcool: %d\n", alco);

    printf("Gasolina: %d\n", gas);

    printf("Diesel: %d\n", disel);

    return 0;
}
