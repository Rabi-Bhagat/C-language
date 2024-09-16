#include<stdio.h>

int main(){

    int a = 98;
    int* b = &a;
    printf("the adress of the a is %u\n", &a);
    printf("the value of the a is %d", *b);

return 0;
}