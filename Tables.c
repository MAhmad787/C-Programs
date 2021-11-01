#include <stdio.h>

void main() {
    int a=1;
    int value;
    printf("Write value to get table of it\n");
    scanf("%d", &value);
    while(a<11)
        {
            int table= value*a;
            printf("%d * %d = %d\n", value, a, table);
            a++;
        }
}
