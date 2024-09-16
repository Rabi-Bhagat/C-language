#include<stdio.h>

int main(){

int i = 58;
int *j = &i;
printf("the address of i is %p\n",&i); 
printf("the address of i is %p\n",j);

printf("the value at adress j %d",*j);
return 0;
}