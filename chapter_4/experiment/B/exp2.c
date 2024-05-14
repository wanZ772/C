#include <stdio.h>

float calc_resistor(float r1, float r2, float r3)   {
    return r1 + (1/((1/r2) + (1/r3)));
}

float calc_current(float volt, float r_target, float r_total) {
    return r_target / r_total * volt;
}

int main()  {
    float total_resistance, current1,current2;
    total_resistance = calc_resistor(100,100,100);
    current1 = calc_current(10, 100, total_resistance);

    printf("Total R: %.2f\nCurrent @ R1: %.2f", total_resistance, current1);
}