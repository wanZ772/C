#include <stdio.h>

int main()  {
    int num = 42;
    int *ptr = &num;
    printf("value of num through pointer: %d\n", *ptr);
    *ptr = 99;
    printf("Double of num through pointer: %d\n", *ptr * 2);
    printf("Memory address for variable num: %p", &num);

    return 0;
}