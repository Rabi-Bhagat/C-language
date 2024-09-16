#include<stdio.h>

float c2f (float);

float c2f( float c){
    return ((c*9)/5)+32;
}
int main(){
float c = 45;
printf("celcius to fsrenhit for%f is:%.2f",c,c2f (c));
return 0;
}

