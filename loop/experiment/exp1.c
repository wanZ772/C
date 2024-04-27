#include <stdio.h> 
#include <stdlib.h> 
int main () { 
int i; 
int sum = 0; 
int squares = 0; 
    for (i = 1; i <= 10; i++)   {
         sum += i; 
 squares = i * i; 
    
    printf("sum of numbers = %d\n",sum); 
    printf("Squares value = %d\n",squares); 
    }
return 0; 
}

