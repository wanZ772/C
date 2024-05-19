#include <stdio.h>

float total_sales(float sales[]){
    float sum = 0;
    for (int i = 0; i < 7; i++) {
        sum += sales[i];
    }
    return sum;
}

int main()  {
    float sales[7];
    for (int i = 0; i < 7; i++) {
        printf("Enter Sales in day %d: RM", i+1);
        scanf("%f", &sales[i]);
    }
    printf("Total daily sales: RM%.2f", total_sales(sales));
    return 0;
}