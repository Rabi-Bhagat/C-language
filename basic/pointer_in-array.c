#include<stdio.h>

int main(){
int  a[5];
printf("the value of marks of 5 childern\n");

for (int i = 0; i < 5; i++)

{
    scanf("%d",&a[i]);
}
for (int i = 0; i < 5; i++)


printf("the marks adress of the childern %d is %u\n", i , &a[i]);
return 0;
}