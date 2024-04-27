#include <stdio.h>

int main()  {
    char var1;
    int var2, var3, var4;
    float var5;

    printf("Enter a character: ");
    scanf("%c", &var1);
    printf("\n\nEnter same decimal numbers: ");
    scanf("%d%o%x", &var2, &var3, &var4);
    printf("\n\nEnter floating-point number: ");
    scanf("%f", &var5);

    printf("%c\n%d\n%d\n%d\n%f", var1, var2, var3, var4, var5);
    
    return 0;
}