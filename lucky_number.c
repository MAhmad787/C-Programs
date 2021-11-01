#include <stdio.h>

int main() {
    char x;
    char name;
    printf("Enter Your name: ");
    scanf("%s", &name);

    printf("Hy Sir %s! What is Your Lucky Number?", name);
    scanf("%d", &x);
    printf("oh! Your Lucky Number is %d", x);

}
