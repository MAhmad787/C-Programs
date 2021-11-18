#include <stdio.h>

int main()
{
    char name[12];
    int age;
    printf("Enter your name\n");
    scanf("%s", &name);
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("Your name is %s and age is %d\n", name, age);
}
