#include <stdio.h>
#include <math.h>

float square()  {
    float width, length;
    printf("Enter Width: ");
    scanf("%f", &width);
    printf("Enter length: ");
    scanf("%f", &length);
    return width * length;
 }
 float circumfrance;
float circle()  {
    float radius;
    printf("Enter Radius: ");
    scanf("%f", &radius);
    circumfrance = 2 * 3.142 * radius;
    return 3.142 * pow(radius, 2);
}

int main()  {
    int geo;
    float result;
    printf("1 - Square\n2 - Circle\n");
    printf("Geo Type: ");
    scanf("%d", &geo);
    
    if (geo ==  1)    {
        result = square();
    }   else if (geo == 2)   {
        result = circle();
        printf("Circumfrance: %.2f\n", circumfrance);
    }
    

    printf("Area: %.2f", result);
}