#include<stdio.h>

// Function prototype
int sum(int, int);

// Function definition
int sum(int x, int y) {
    printf("the sum is %d\n",x+y);
    return x + y;
}

int main() {
    int a = 4;
    int b = 5;
    // int result = sum(a, b);
    // printf("The sum is %d\n", result);
    sum(a,b);

    int c=7, d=8;
    sum(c,d);

    return 0;
}
