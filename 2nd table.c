#include <stdio.h>

void main() {
    int a;
   printf("Write number to find number ranging upto 99\n");
    scanf("%d", &a);
   do{
           printf("%d\n", a);
           a++;
        }while(a<=99);
}
int isl()
{
    int a;
    int i=1;
    printf("Enter the number of which you want the table of:");
    scanf("%d", &a);
    while(i<11){
        printf(" %d *%d = %d\n",a,i,a*i);
        i++;
    }
}
