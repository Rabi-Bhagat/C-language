#include<stdio.h>

int main(){

int prime=0,  num;
printf("enter the value of num:");
    scanf("%d",&num);
    for (int i = 2; i < num; i++)

    {
        if (num %i ==0)
        {
           prime = 1;
        }
    }
        if (prime)
        {
           printf("the given number %d is prime\n",num);
        }
        else{
            printf("the given number%d is not prime\n",num);
        }
        
    
    

 
    

return 0;
}