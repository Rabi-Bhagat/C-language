#include<stdio.h>
int main(){
    int a,b;

    printf("enter the value of a:");
    scanf("%d",&a);

    printf("enter the value of b:");
    scanf("%d",&b);

    if(a<b){
        printf("The smallest number is: %d",a);

    }

    else{
        printf("the smallest is: %d",b);
    }
    return 0;
}