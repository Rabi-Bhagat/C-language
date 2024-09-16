#include<stdio.h>

int main(){

int n;
printf("enter the value of n:");
scanf("%d",&n);

for (int i = 0; i < n; i++ )//i for rows
{
    for (int j = 0; j<2*i+1 ; j++)// j for columns
    //formula for the odd number is (2*i+1)
    {
       printf("*");
    }
    printf("\n");
    
}

return 0;
}