#include<stdio.h>

void change_Twenty_times(int*);

void change_Twenty_times(int*a){
    *a = *a *20;
}

int main(){
    int a = 20;
    // printf("enter the value of a:");
    // scanf("%d\n",&a);
    printf("the value of a is%d\n",a);
    change_Twenty_times(&a);
    printf("the value at a is %d",a);

return 0;
}