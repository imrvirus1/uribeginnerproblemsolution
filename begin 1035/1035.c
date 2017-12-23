#include<stdio.h>

int even (int a){
    if ( a % 2 == 0){
        return 1;
    }
    return 0;
}

int main()
{
    int a, b, c, d, sum1, sum2;

    scanf("%d%d%d%d", &a, &b, &c, &d);

    sum1 = a + b;

    sum2 = c + d;

    if(b > c && d > a && sum2 > sum1 && c > 0 && d > 0 && even(a) == 1){

        printf("Valores aceitos\n");
    }

    else{

        printf("Valores nao aceitos\n");
    }

    return 0;
}
