#include <stdio.h>

int main() {

double radius, circumference, area; // Declare 3 floating-point variables

const double pi = 3.14159265; // Declare and define PI

printf("Enter the radius: "); // Prompting message

scanf("%lf", &radius); // Read input into variable radius

// Compute area and circumference

area = radius * radius * pi;

circumference = 2.0 * radius * pi;

// Print the results

printf("The radius is %.0lf.\n", radius);

printf("The area is %.3lf.\n", area);

printf("The circumference is %.3lf.\n", circumference);


return 0;

}