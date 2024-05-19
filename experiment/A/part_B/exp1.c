#include <stdio.h>

float calculateAverageTemp(float sensorTemp[])  {
    float temp_data[3] = {0,-999999,999999};
    for (int i = 0; i < 5; i++) {
        temp_data[0] += sensorTemp[i] / (i + 1);
        if (sensorTemp[i] > temp_data[1])   {
            temp_data[1] = sensorTemp[i];
        }  
        if (sensorTemp[i] < temp_data[3])  {
            temp_data[3] = sensorTemp[i];
        }
    }
    return *temp_data;
}

int main()  {
    float sensorTemp[] =  {75, 80, 82, 78, 85};
    float temp_data[] = calculateAverageTemp(sensorTemp);
    printf("Temp ave: %.2f C", temp_data[0]);
    return 0;
}