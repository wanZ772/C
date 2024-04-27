#include <stdio.h>
#include <math.h>

int main()  {
    for (int i = 1; i <= 10; i++)   {
        printf("%d ", i);
    }
    printf("\n");
    int j = 8;
    while ( j >= 2) {
        printf("%d ", j);
        j -= 2;
    }
    printf("\n");

    for (int k = 1; k <= 6; k++)   {
        if (k != 1)
        printf("%.0f ", pow(2,k));
    }

    
}