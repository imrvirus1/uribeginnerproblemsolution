#include<stdio.h>

int great(int x, int y){

    if(x > y){
        return x;
    }
    else{

    return y;

    }
}

int main()
{
    int a, b, c, test1, test2;

    scanf("%d%d%d", &a, &b, &c);

    test1 = great(a,b);
    test2 = great(test1,c);

    printf("%d eh o maior\n", test2);

    return 0;
}
