#include<stdio.h>

int main()
{

    int i, N, in = 0, out = 0;

    long long X;

    scanf("%d", &N);

    if(N < 10000){

        for(i = 1; i <= N; i++){

            scanf("%lld", &X);

            if(X > -4711630319722168320 && X < 4711630319722168320 ){

               if( X >= 10 && X <= 20){

                    in++;

               }
               else{

                out++;

               }

            }


        }
        printf("%d in\n%d out\n", in, out);

    }
    return 0;
}
