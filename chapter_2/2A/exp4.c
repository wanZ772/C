#include <stdio.h>

int main()  {
    int unit, amount;
    printf("Enter total unit consumed: ");
    scanf("%d", &unit);
    
    if (unit <= 50) {
        amount = unit * .5;
    }   else if (unit <= 150)   {
        amount = 25 + (unit - 50) * .75;
    }   else if (unit <= 250)   {
        amount = 100 + (unit - 150) * 1.2;
    }   else    {
        amount = 220 + (unit - 250) * 1.5;
    }

    int total = amount + (amount * .2);

    printf("Total charge: RM%d", total);
}