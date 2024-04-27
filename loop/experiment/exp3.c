#include<stdio.h> 
int main() { 
int age; 
char *status; 
 while (1)  { 
    printf("\n Enter your age : "); 
    scanf("%d", &age); 
    if (age <= 5)   {
        status = "Infant";
    }   else if (age >= 6 && age <= 18) {
        status = "Youth";
    }   else if (age > 18 && age < 60){
        status = "Adult";
    }   else if (age >= 60){
        printf("Retired");
        break;
    }
    printf("%s", status);
 } 
    
return 0; 
} 