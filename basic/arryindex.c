#include<stdio.h>

int main(){
int  a[5];
printf("the value of marks of 5 childern\n");
// scanf("%d",&a[0]);
// scanf("%d",&a[1]);
// scanf("%d",&a[2]);
// scanf("%d",&a[3]);
// scanf("%d",&a[4]);
//index = n-1

for (int i = 0; i < 5; i++)

{
    scanf("%d",&a[i]);
}


printf("the marks of the childern is: %d %d %d %d %d ", a[0],a[1],a[2],a[3],a[4]);
return 0;
}