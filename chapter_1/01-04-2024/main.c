#include <stdio.h>

int main()  {
    char alph;
    printf("Please choose alphabet A,B or C: ");
    scanf("%c", &alph);
    switch (alph)   {
        case 'a': 
            printf("You've entered 'a'");
            break;
        case 'b':
            printf("You've entered 'b'");
            break;
        case 'c':
            printf("You've entered 'c'");
            break;
        default:
            printf("'%c' is invalid input", alph);
    }
}