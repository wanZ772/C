#include <stdio.h>


int main()  {
     int unit; 
    double amount; 
    printf("Enter total units consumed: "); 
    scanf("%d", &unit); 
    if (unit < 50)  
        amount = 20 * .50;
    else if (unit <= 150)
        amount = 25 + (unit - 50) * .75;
        
    else if (unit <= 250)
        amount = 100 + (unit - 150) * 1.2;
    else
        amount = 220 + ((unit-250) * 1.50); 
    printf("Total amount: %.2f", amount + (amount * .2));
    return 0;
}