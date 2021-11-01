#include<stdio.h>

void main() {
    float num;
    printf("Write the number to find the square of it:\n");
    scanf("%f", &num);
    float square = num*num;
    printf("The square of %f is %f", num, square);
}
