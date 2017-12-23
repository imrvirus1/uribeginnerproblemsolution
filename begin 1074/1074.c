#include<stdio.h>

int main()
{
    int i, N;

    long long num;

    scanf("%d", &N);  //total test case

    if(N < 10000){           //test case N < 10000

        for(i = 1; i <= N; i++){

            scanf("%lld", &num);  //case value input

            if(num > -4711630319722168320  && num < 4711630319722168320 ){    // if -10^7 < num < 10^7 then

                if(num == 0){

                    printf("NULL\n");
                }

               else if(num % 2 == 0){   //if even

                    if(num > 0)
                        printf("EVEN POSITIVE\n");    //even positive
                    if(num < 0)
                        printf("EVEN NEGATIVE\n");      //even negative
                }

                else{       //else odd

                    if(num > 0)
                        printf("ODD POSITIVE\n");   //odd positive

                    if(num < 0)
                        printf("ODD NEGATIVE\n");       //odd negative
                }
            }
        }

    }

    return 0;
}
