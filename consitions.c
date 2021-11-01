#include<stdio.h>

void main()
{
    float a, b;
    printf("write the values to find the first value is greater or lesser than second\n");
    printf("write the first value\n");
    scanf("%f", &a);
    printf("write the second value\n");
    scanf("%f", &b);
    if(a>b){
        printf("1st value is greater than 2nd\n");
    }
    else
    {
        printf("1st value is lesser than 2nd\n");
    }

}
