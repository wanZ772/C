#include <stdio.h> 
 #include <stdlib.h> 
 int main() { 
int first,second,ans; 
printf(" variable x : "); 
scanf("%d",&first); 
printf("\n variable y: "); 
scanf("%d",&second); 
ans = first - second; 
printf("\n x - y = %d \n", ans); 
if(ans >= 0){ 
printf("\n Answer (%d) is a positive number \n", ans);} 
else { 
printf("\n Answer (%d) is a negative number \n", ans);} 
printf("Thank you \n"); 
return 0; 
 } 