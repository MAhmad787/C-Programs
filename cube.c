#include<stdio.h>

void main() {
    float num;
    printf("Write the number to find the cube of it:\n");
    scanf("%f", &num);
    float cube = num*num*num;
    printf("The square of %f is %f", num, cube);
}
