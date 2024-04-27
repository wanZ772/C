#include <stdio.h>


int main()  {
    int num = 10;
    while (num >= 10 && num <= 50)  {
        printf("\nEnter Number between 10-50: ");
        scanf("%d", &num);
        if (num >= 10 && num <= 50) {
            printf("Number is: %d\n", num);
        }   else    {
            printf("%d is not between 10-50", num);
            break;
        }
    }
    
}