#include <stdio.h>

int main()  {
    char option;
    printf("Enter A/B/C: ");
    scanf("%c", &option);

    switch  (option)    {
        case 'A': printf("Actions speak louder than words"); break;
        case 'B': printf("Ball is in your court"); break;
        case 'C': printf("Cross that bridge when you come to it"); break;
        default: printf("%c Invalid option", option); break;
    }
    printf("\nThanks");
    return 0;
}