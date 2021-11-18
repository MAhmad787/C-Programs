#include <stdio.h>

int main() {
    int num1;
    int num2;
    char op;

    printf("Enter your Number: ");
    scanf("%d", &num1);
    printf("Enter your first Operator: ");
    scanf(" %c", &op);
    printf("Enter your second Number: ");
    scanf("%d", &num2);


    switch (op){
        case '+' :
        printf("Answer: %d", num1 + num2);
        break ;
        case '-' :
        printf("Answer: %d", num1 - num2);
        break ;
        case '*' :
        printf("Answer: %d", num1 * num2);
        break ;
        case '/' :
        printf("Answer: %d", num1 / num2);
        break ;
    default :
    printf("Invalid Operator!!! ");
    }

}
