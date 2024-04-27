#include <stdio.h> 
#include <stdlib.h> 
int main () { 
int counter =0; 
int total = 0; 
int mark = 0; 
int average = 0; 
while (counter < 5) { 
 printf( "enter mark: "); 
 scanf("%d", &mark); 
 total = total + mark; 
 counter +=1; 
 } 
average = total/5; 
printf( "class average is %d\n", average); 
return 0; 
} 