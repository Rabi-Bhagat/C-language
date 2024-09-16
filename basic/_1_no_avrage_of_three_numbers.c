#include<stdio.h>
float avarage(int a,int b,int c);
float avarage(int a ,int b ,int c) {
return(a + b + c )/3.0;
}
int main(){

int a=2,b=4,c=55;
printf("the avarage of the three numbers is %f\n" ,avarage ( a,b,c));
return 0;
}

