#include <stdio.h>

double calculateAverageTemp(double sensorTemp[])  {
    double data[3] = {0, -9999999999, 9999999999};
    for (int i = 0; i < 5; i++) {
        data[0] += sensorTemp[i];
        if (sensorTemp[i] > data[1])    {
            data[1] = sensorTemp[i];
        }
        if (sensorTemp[i] < data[2])    {
            data[2] = sensorTemp[i];
        }
    }
    return *data;
}

int main()  {
    double sensorTemp[] =  {75, 80, 82, 78, 85};

    double data[] = {calculateAverageTemp(sensorTemp)};
    
    printf("Average Temperature: %.2f C\n", data[0] / 5);
    printf("Highest Temperature: %.2f C\n", data[2]);
    printf("Lowest Temperature: %.2f C\n", data[1]);
    return 0;
}