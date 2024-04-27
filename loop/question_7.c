#include <stdio.h>

int main()  {
    int sum = 0, temp, odd = 0;
    for (int i = 0; i< 10; i++) {
        printf("Enter number: ");
        scanf("%d", &temp);
        sum += temp;
        if (temp % 2 == 0)  {
            odd++;
        }

    }
    printf("total sum: %d\ntotal odd: %d", sum, odd);
}