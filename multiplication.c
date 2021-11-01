#include<stdio.h>


int main(){
    float a, b, sum;
    printf("This program will subtract two numbers of your choice\n");
    printf("Enter the first number?\n");
    scanf("%f", &a);
    printf("Enter the second number?\n");
    scanf("%f", &b);
    sum = a*b;
    printf("The difference of %f and %f is %f\n",a ,b, sum);
}
