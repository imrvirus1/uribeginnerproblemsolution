#include<stdio.h>

int main()
{
    double num[3], assend[3];
    int i;

    for(i = 0; i < 3; i++){

        scanf("%lf", &num[i]);

    }

  // A > 0 && B > 0 && C > 0

    if(num[0] > 0 && num[1] > 0 && num[2] > 0){

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

    /*
        A = assend[0]
        B = assend[1]
        C = assend[2]

      */

        // A <= (B + C)
        if(assend[0] >= (assend[1] + assend[2]) ){

            printf("NAO FORMA TRIANGULO\n");
        }

        // A^2 = B^2 + C^2
        if((assend[0] * assend[0]) == ( (assend[1] * assend[1])+( assend[2] * assend[2]) ) ){

            printf("TRIANGULO RETANGULO\n");
        }
        //A^2 > B^2 + C^2
        if( (assend[0] * assend[0]) > ( (assend[1] * assend[1])+( assend[2] * assend[2]) ) ){

            printf("TRIANGULO OBTUSANGULO\n");
        }
        //A^2 < B^2 + C^2
        if( (assend[0] * assend[0]) < ( (assend[1] * assend[1])+( assend[2] * assend[2]) ) ){

            printf("TRIANGULO ACUTANGULO\n");
        }

        // A = B = C
        if( assend[0] == assend[1] && assend[1] == assend[2]){

            printf("TRIANGULO EQUILATERO\n");

        }

        // (A = B & B != C) or (A = C & C != B) or (B = C & C != A)

        if( (assend[0] == assend[1] && assend[1] != assend[2])  ||
           (assend[0] == assend[2] && assend[2] != assend[1]) ||
        (assend[1] == assend[2] && assend[2] != assend[0]) ){

            printf("TRIANGULO ISOSCELES\n");

        }

    }




    return 0;
}
