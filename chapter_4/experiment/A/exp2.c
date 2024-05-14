#include <stdio.h>

int check_number(int num);

int main()  {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if (check_number(num))  {
        printf("Odd number!");
    }   else    {
        printf("Even number!");
    }
}

int check_number(int num)  {
    switch (num % 2)    {
        case 0:
            return 0;
            break;
        default:
            return 1;
            break;
    }
}