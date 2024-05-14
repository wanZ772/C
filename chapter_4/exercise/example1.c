#include <stdio.h>

int global = 10;


void function1()    {
    printf("function fucntion global: %d\n", global);
    printf("function fucntion private:");
}

int main()  {
    int private = 5;
    printf("main fucntion global: %d\n", global);
    printf("main fucntion private: %d\n", private);
    function1();
}

