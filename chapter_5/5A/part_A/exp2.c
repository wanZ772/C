#include <stdio.h>

void show_marks(int grades[])   {
    while (1){
                int id;
                printf("Enter Student's ID (0-5):");
                scanf("%d", &id);
                if ((id >= 0) && (id <6))   {
                    printf("Student Marks: %d\n", grades[id]);
                } else if (id == -1)    {
                    break;
                }   else    {
                    printf("\nINVALID ID\n\n");
                }
            }
}

int change_marks(int old_grades[])  {
    while (1){
                int id;
                printf("Enter Student's ID (0-5):");
                scanf("%d", &id);
                if ((id >= 0) && (id <6))   {
                    printf("Enter new marks: ");
                    scanf("%d", &old_grades[id]);
                } else if (id == -1)    {
                    break;
                }   else    {
                    printf("\nINVALID ID\n\n");
                }
            }

            return *old_grades;
}

int main()  {
    int grades[6];
    grades[0] = 85;     grades[1] = 92;     grades[2] = 78;     grades[3] = 95;     grades[4] = 88;     grades[5] = 90; 
        int total = 0, high = -1, low = 101;
        float ave = 0;
        printf("All Student's Grade: \n");
        for (int i = 0; i< 6;i++)   {
            printf("Student %d: %d\n", i+1, grades[i]);
            if (grades[i] > high)   {
                high = grades[i];
            }
            if (grades[i] < low)    {
                low = grades[i];
            }
            total += grades[i];    
        }
        ave = total / 6;
          printf("-----------------\n");
            printf("Total Marks: %d\n", total);
            printf("-----------------\n");
            printf("Average Marks: %.2f\n", ave);
            printf("-----------------\n");
            printf("Highest Marks: %d\n", high);
            printf("-----------------\n");
            printf("Lowest Marks: %d\n", low);
            int exit = 1;                
            while (exit)   {
                int options;
                printf("1 - Show Student's Marks\n");
                printf("2 - Change Student's Marks\n");
                scanf("%d", &options);
                switch (options)    {
                    case 1:
                        show_marks(grades);
                        break;
                    case 2:
                        *grades = change_marks(grades);
                        break;
                    case -1:
                        exit--;
                        break;
                    default:
                        printf("\n\nINVALID OPTION\n\n");
                        break;
                }
            }
    return 0;
}