#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the number:");
    scanf("%d",&a);

    printf("enter the power:");
    scanf("%d",&b);

    c = pow(a,b);
    printf("the power is%d",c);
    return 0;

}