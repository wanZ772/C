#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

void calculateProperties(float *rad, float *ar, float *cir)  {
    *cir = 2 * PI * *rad;
    *ar = 2 * PI * pow(*rad, 2);
}

int main()  {
    float circumference = 0, area = 0, radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    calculateProperties(&radius, &area, &circumference);
    printf("Circumference: %.2f\nArea: %.2f", circumference, area);
    return 0;
}