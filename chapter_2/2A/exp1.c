 #include <stdio.h> 
 #include <stdlib.h> 
 int main() { 
int answer=10; 
int password; 
printf("enter your password: "); scanf("%d", 
&password); 
if(password == answer){
 printf("Correct password \n");
} 
else{
 printf("FAILED ATTEMPT\n");
}
return 0;
 }