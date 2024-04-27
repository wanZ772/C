#include <stdio.h>

int main()  {
    int var1;
    float var2, var3;
    printf("Enter 3 numbers: \n");
    scanf("%d%f%f", &var1, &var2, &var3);
    printf("%10d\n%5f\n%20f", var1,var2,var3);
    // printf("%.9d\n%.6f\n%.2f", var1,var2,var3);
    return 0;
}