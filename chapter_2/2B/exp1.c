#include <stdio.h>

int main()  {
    char alph;
    printf("Enter an alphabet character: ");
    scanf("%c", &alph);

    switch (alph)   {
        case 'a': printf("You've entered: %c", alph); break;
        case 'b': printf("You've entered: %c", alph); break;
        case 'c': printf("You've entered: %c", alph); break;
        default:
            printf("You've entered other than a/b/c ");
    }
}