#include <stdio.h>

char *water_level_status(float water_level)   {
    char *status;
    if (water_level < 1)    {
        status = "Safe";
    }   else if ((water_level >= 1) && (water_level <= 3))  {
        status = "Aware";
    }   else    {
        status = "Danger";
    }
    return status;
}

int main()  {
    float arrayLevel[7];
 
    for (int i = 0; i < 7; i++) {
        printf("Enter water level (m) for day %d: ", i+1);
        scanf("%f", &arrayLevel[i]);
    }

    printf("\n-----------------------\n");

    for (int i = 0; i < 7; i++)   {
        printf("Water level (m) day %d: %.2f - %s\n", i+1, arrayLevel[i], water_level_status(arrayLevel[i]));
    }

    return 0;
}