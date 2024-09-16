#include<stdio.h>
int main(){
    float marks;
    printf("enter your marks:");
    scanf("%f",&marks);

    if(marks >= 30){
        printf("you are pass");
    }
    else{
        printf("you are fail");
    }

    return 0;

}