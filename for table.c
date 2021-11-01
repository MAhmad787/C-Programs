#include <stdio.h>

void main() {
    int value;
            printf("Write value to get table of it\n");
            scanf("%d", &value);
    for(int a=1; a<11; a++)
        {

            int table= value*a;
            printf("%d * %d = %d\n", value, a, table);
        }
}
