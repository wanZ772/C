#include <stdio.h>

int main()  {
    int my_array[6];
    for (int i = 0; i < 6; i++) {
        printf("Enter value: ");
        scanf("%d", &my_array[i]);
    }
    for (int i = 0; i < 6; i++) {
        printf("index %d, element %d: %d\n", i+1,i, my_array[i]);
    }
    return 0;
}