#include <stdio.h>

int main()  {
    int x,y;
    printf("Enter number x:");
    scanf("%d", &x);
    printf("Enter number y:");
    scanf("%d", &y);

    if (x > y)  {
        printf("x is greater than y");
    }   else if (y > x) {
        printf("y is greater than x");
    }   else    {
        printf("x and y are equals");
    }
}