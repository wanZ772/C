#include <stdio.h>
 
int main()  {
    int num1, num2;
    char opertation;
    printf("Enter Arithmetic operation (e.g. 1 + 1): ");

    scanf("%d %c %d", &num1, &opertation, &num2);
    
    switch (opertation) {
        case '+': printf("%d %c %d = %d", num1, opertation, num2, (num1 + num2)); break;
        case '-': printf("%d %c %d = %d", num1, opertation, num2, (num1 - num2)); break;
        case '/': printf("%d %c %d = %d", num1, opertation, num2, (num1 / num2)); break;
        case '*': printf("%d %c %d = %d", num1, opertation, num2, (num1 * num2)); break;
        case 'x': printf("%d %c %d = %d", num1, opertation, num2, (num1 * num2)); break;
        default: printf("%c is invalid operation!", opertation);
    }
    return 0;
}