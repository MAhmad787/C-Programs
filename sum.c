#include<stdio.h>

int main() {
    float a, b , sum;
    printf("This Program will add two numbers of your choice.\n");
    printf("Enter The First Number\n");
    scanf("%f", &a);
    printf("Enter The Second Number\n");
    scanf("%f", &b);
    sum = a+b;
    printf("The sum of %lf and %lf is %lf\n", a, b, sum);
}
