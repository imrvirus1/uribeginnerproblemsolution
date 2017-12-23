#include<stdio.h>


//this is 3 number highest to lowest sorting program

int main()
{
    int num[3], assend[3], i;

    for(i = 0; i < 3; i++){

        scanf("%d", &num[i]);

    }
//this is for find highest number of 3 number
    for(i = 0, assend[0] = 0; i < 3; i++){

        if(num[i] > assend[0]){

            assend[0] = num[i];
        }
    }

// this is for find lowest number of 3 number
    for(i = 1, assend[2] = num[0]; i < 3; i++){

        if(assend[2] > num[i]){

            assend[2] = num[i];
        }
    }

// this is for find the  middle number of 3 number
    for(i = 1, assend[1] = num[0]; i < 3; i++){

        if(num[i] < assend[0] && num[i] > assend[2]){

            assend[1] = num[i];
        }
    }

    printf("%d\n%d\n%d\n\n", assend[2], assend[1], assend[0]);

    printf("%d\n%d\n%d\n", num[0], num[1], num[2]);

    return 0;
}
