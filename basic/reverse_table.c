#include<stdio.h>
int main(){
    int a;
    printf( "enter the number of multiplication table:");
    scanf("%d",&a);
    for (int i = 10; i >=1; i--)
    {
        // printf("the multiplication of table is :%d\n",a *i);
        printf("the multiplication of table is :%d*%d=%d\n",a,i,a*i);

    }
    return 0;

    

}