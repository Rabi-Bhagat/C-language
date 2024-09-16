#include<stdio.h>

int sum_natural(int);
int sum_natural(int n){
    if(n==1){
        return 1;
    }
    return sum_natural(n-1) + n;;
}
int main(){

    int n = 5;
    printf("the sum of the number%d is %d\n",n,(sum_natural));

return 0;
}