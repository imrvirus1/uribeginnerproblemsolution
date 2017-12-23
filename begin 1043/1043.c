#include<stdio.h>

int main()
{
    double a, b, c, area, perimetro;

    scanf("%lf%lf%lf", &a, &b, &c);


    if((a+b)>c && (b+c)>a && (c+a)>b){

        perimetro = (a + b + c);

        printf("Perimetro = %.1lf\n", perimetro);
    }

    else{

        area = (1/2.0) * (a + b) * c;

        printf("Area = %.1lf\n", area);
    }

    return 0;
}
