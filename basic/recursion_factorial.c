#include<stdio.h>

int factorial(int);

int factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    // for factorial 
    return factorial(n-1) *n;

}

int main(){

    int a = 4;
    printf("the factorial of the %d is:%d",a,factorial(a));

return 0;
}