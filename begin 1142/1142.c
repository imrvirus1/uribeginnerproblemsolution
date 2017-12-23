#include<stdio.h>

int main()
{
    int num, i, j;

    scanf("%d", &num);

        for(i = 1; i <= num * 4; i = i +4){

            for(j = i; ; j++){

                if(j % 4 == 0){    //here i ensure that this have no divided by 4 number
                    break;
                }
                else{
                    printf("%d ", j);    //here print 1,2,3 .. 5,6,7 .. 9,10,11 series
                }
            }
            printf("PUM\n");
        }


    return 0;
}
