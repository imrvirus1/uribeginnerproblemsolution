#include<stdio.h>

int main()
{
    int i, X;

    while(scanf("%d", &X))
    {
        if(X == 0){
        break;
        }

        for(i = 1; i < X; i++){

            printf("%d ", i);
        }
        printf("%d\n", X);

    }


    return 0;
}
