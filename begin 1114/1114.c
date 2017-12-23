#include<stdio.h>

int main()
{
    int password;

    while(scanf("%d", &password)){

        if(password == 2002){   //here i check is this password is 2002 if this then print and break the loop

            printf("Acesso Permitido\n");

            break;
        }
        else{  //else run and print this msg

            printf("Senha Invalida\n");
        }
    }

    return 0;
}
