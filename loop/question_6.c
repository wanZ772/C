#include<stdio.h> 
int main() 
{ 
int start,end; 
int sum = 0; 
printf("Start integer: "); 
 scanf("%d", &start); 
 printf("\nEnd integer: "); 
 scanf("%d", &end); 
 int increament = start;
 while (1){
    if (increament <= end)   {
        sum += increament;
        increament++;
    } else  {
        break;
    }
 } 
    printf("The sum between %d and %d is %d\n",start,end,sum); 
    return 0; 
}
