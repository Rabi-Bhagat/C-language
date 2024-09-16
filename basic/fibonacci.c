#include<stdio.h>
int fibonacci(int);
int fibonacci(int n){
    if(n== 1 || n== 2){
        return n-1;
    }
    return fibonacci(n-1) +  fibonacci(n-2);
}
// int fibonacci (int);
int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    printf(" the fibonacci series at %d is %d\n",n,fibonacci(n));

return 0;
}