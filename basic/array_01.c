#include<stdio.h>

int main(){
     int a[] = {1,2,3,4,5,6,6,78,9,10};
     int*ptr =a;

     printf("the value of the address %u is %d ", ptr+3, *(ptr+3));
return 0;
}

