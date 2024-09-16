#include<stdio.h>
int main(){
    int a;

    printf("enter the value of abetween (1-3):");

    scanf("%d",&a);

    switch(a) {

        case 1 : printf("butter");
        break;
        case 2 : printf("ghee");
        break;
        default : printf("invalid number");

    }
    return 0;
}