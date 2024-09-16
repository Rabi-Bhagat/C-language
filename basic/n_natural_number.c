#include<stdio.h>
int main(){

int i=0,a;
printf("enter the value of a:");
scanf("%d",&a);

do
{
    printf("the natural number is : %d \n",i);
    i++;

} while (i<=a);

return 0;


}