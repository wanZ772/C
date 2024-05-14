#include <stdio.h>

int factorial(int target) {
    if (target != 0)
        return target * factorial(target-1);
    else
        return 1;
}
int main() {
    int fact = factorial(4);
    printf("Factorial >> %d", fact);
    return 0;
}

