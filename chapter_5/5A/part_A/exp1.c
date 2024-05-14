#include <stdio.h>

int main()  {
    int numbers[5];
    int sum = 0;
    for (int i = 1; i < 6; i++)   {
        numbers[i-1] = i * 10;
    }
    printf("Index 2: %d\n", numbers[0]);
    numbers[3] = 45;
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    printf("Sum all index element: %d", sum);
    return 0;
}