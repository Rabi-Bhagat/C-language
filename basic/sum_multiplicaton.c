#include<stdio.h>

int main(){
    int sum=0,a;
    printf("enter the value of a:");
    scanf("%d",&a);
    for (int i = 0; i <=10; i++)
    {
        sum=sum+(a*i);
    }
    printf(" the addition of the multiplication of the number that is you given is table is:%d\n",sum); 
    

return 0;
}