#include <stdio.h>

int main()  {
    for (int i = 10; i > -1; i--)    {
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 10; i > -1; i = i -2)    {
        printf("%d ", i);
    }
}