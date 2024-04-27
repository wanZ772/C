#include <stdio.h>


int main()  {
    int height = 10;
    for (int i = 0; i< height; i++) {
        for (int j = 0; j<i;j++)    {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < height; i++)    {
        if (i < height / 2) {
            for (int j = 0; j < i; j++) {
                printf("*");
            }
        }   else    {
            for (int j = height; j > i; j--)    {
                printf("*");
            }
        }
        printf("\n");
    }
   
    for (int i = height; i > 0; i--)    {
        for (int j = i; j > 0; j--) {
            printf("#");
        }
        printf("*\n");
    }
}