#include <stdio.h>

float rateRegular = 10, rateOvertime = 15;
int timeRegular = 39;
int over;
int calcRegular(int regular_working_hour);
int calcOT(int ot_hour);
float calcSalary(float regular, float overtime);

int calcRegular(int regular_working_hour)   {
    // printf("%d", regular_working_hour * 10);
    return (rateRegular * regular_working_hour);
}

int calcOT(int regularHours) {
    
    if (regularHours > 39)   {
        over = regularHours - 39;
        return rateOvertime * over;
    }
    return 0;
    
}
float calcSalary(float regular, float overtime) {
    // printf("%d", regular);
    return regular + overtime;
}

int main()  {
    int regularHours, OThours;
    int regular, overtime;
    float totalSalary;

    printf("Enter working hour: ");
    scanf("%d", &regularHours);
    
    regular = calcRegular(regularHours);
    overtime = calcOT(regularHours);
    totalSalary = calcSalary(regular, overtime);

    printf("Regular working hour rate: RM%d\nOvertime working hour rate: RM%d\nTotal Salary: RM%.2f", regular, overtime, totalSalary);
}
