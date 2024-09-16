#include<stdio.h>
int main(){
    int age;
    printf("enter your age:");
    scanf("%d",&age);

    if (age >= 18)
    {
        printf("you are eligible to vote\n");
    }
    else{
        printf("you sre not eligible for vote\n");
    }
    return 0;
    
}