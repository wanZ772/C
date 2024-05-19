#include <stdio.h>

float total_sale(float sale[])  {
    float total_sale = 0;
    for (int i = 0; i < 7; i++) {
        total_sale += sale[i];
    }
    return total_sale;
}

int main()  {
    float dailySale[7];
    char *days[7]  = {"MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY"};
    for (int i = 0; i < 7; i++) {
        printf("Enter sales for %s: RM", days[i]);
        scanf("%f", &dailySale[i]);
    }

    printf("\n\nTotal daily sales: RM%.2f", total_sale(dailySale));
    return 0;
}