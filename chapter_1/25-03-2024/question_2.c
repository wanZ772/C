#include <stdio.h>

int main()  {
    int var1, var2;

    // printf("Enter number 1:");
    // scanf("%d", &var1);
    // printf("Enter number 2:");
    // scanf("%d", &var2);

    printf("Enter number 1 and 2: ");
    scanf("%d%d", &var1,&var2);
    

    printf("Number 1: %d\nNumber 2: %d", var1, var2);
    return 0;
}