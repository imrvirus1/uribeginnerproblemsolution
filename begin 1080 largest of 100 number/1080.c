#include<stdio.h>

int main()
{
    int i, j, N[100], count, large, pos;

    for(i = 0; i < 100; i++){

        scanf("%d", &N[i]);  // input all  100 number
    }

    for(j = 0, count = 0; j < 100; j++){

        if(N[j] < 0){   //here i count  if all number is positive
            count++;
        }
    }

    if(count == 0){

        for(i = 1, large = N[0]; i < 100; i++){

            if(large < N[i]){

                large = N[i];     //here i find the largest number

                pos = i +1;     //here i find the largest number position
            }
        }

     printf("%d\n%d\n", large, pos);

    }



    return 0;
}
