#include <stdio.h>

int main()  {
    int num1, num2;
    char operation;
    printf("Enter arithmetic operation: ");
    scanf("%d%c%d", &num1, &operation, &num2);

    switch (operation) {
        case '+': printf("%d %c %d = %d", num1, operation, num2, (num1 + num2)); break;
        case '-': printf("%d %c %d = %d", num1, operation, num2, (num1 - num2)); break;
        case '/': printf("%d %c %d = %d", num1, operation, num2, (num1 / num2)); break;
        case '*': printf("%d %c %d = %d", num1, operation, num2, (num1 * num2)); break;
        case 'x': printf("%d %c %d = %d", num1, operation, num2, (num1 * num2)); break;
        default: printf("%c is invalid operation!", operation);
    }
    
}