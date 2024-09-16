// #include <stdio.h>
// int main(){
//     int a = 6;
//     int b = 4;
//     int c;
//     c = a+b;
//     printf("your add is %d",c);
//     return 0;
// }

#include <stdio.h>
int main(){
    int a,b;
    printf("enter the value of a:");
    scanf("%d",&a);

    printf("enter the value of b:");
    scanf("%d",&b);

    int sum = a + b;
    printf("add is %d",sum);
    return 0;
}