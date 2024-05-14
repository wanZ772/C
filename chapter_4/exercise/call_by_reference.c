#include <stdio.h>
#include <stdlib.h>

void change(int *x)  {
    *x += 100;
    printf("during call: %d\n", *x);
}

int main()  {
    int x = 100;
    printf("Before call: %d\n", x);
    change(&x);
    printf("After call: %d", x);
}