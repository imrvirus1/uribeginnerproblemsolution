#include<stdio.h>

int main()
{
    int A, B;

    //use end of line eof

    while(scanf("%d %d", &A, &B) != EOF){

        if(B % A == 0){

            printf("Sao Multiplos\n");
        }

        else{

            printf("Nao sao Multiplos\n");
        }
    }

    return 0;
}
