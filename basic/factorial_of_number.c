#include<stdio.h>

int main(){
    int product =1,n,value;
    printf("enter the value of n:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
         product = product * i;
    }
    printf(" the addition of the factorial of the number that is you given is table is:%d\n",product); 

return 0;
}