#include <stdio.h>

int main()  {
    int sum = 0, temp;
    for (int i = 1; i <= 4; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &temp);
        if (temp < 0)   {
            sum += temp;
        } else{
            continue;
        }
    }
    printf("%d", sum);
    return 0;
}