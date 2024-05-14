#include <stdio.h>
#include <math.h>
int num;
int square(int num) {
    return num * num;
}

double number() {
    // int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    int ans = square(num);
    return ans;
}


int main()  {
    // int num;
    // printf("Enter number: ");
    // scanf("%d", &num);
    int ans2 = number();
    printf("Square for: %d is %d", num, ans2);
}