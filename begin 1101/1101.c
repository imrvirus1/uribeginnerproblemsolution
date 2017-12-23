#include<stdio.h>

int main()
{
    int M, N, i, sum;

    while(scanf("%d %d", &M, &N)){   //input two number M & N

            if(M == 0 || N == 0  || M < 0 || N < 0){    // here i check if M == 0 or N == 0 or N < 0 or M < 0

                break;      //if this break the loop
            }

            else{

                    if(M < N){   //here i check if i m < n

                        for(i = M, sum = 0; i <= N; i++){

                        sum = sum + i;

                        printf("%d ", i);
                    }

                    printf("Sum=%d\n", sum);  //print the sum M to N all number
                }

                else{   //here is N > M

                     for(i = N, sum = 0; i <= M; i++){

                        sum = sum + i;

                        printf("%d ", i);
                    }

                    printf("Sum=%d\n", sum);  //print the sum of N to M number
                }
            }

         }

    return 0;
}
