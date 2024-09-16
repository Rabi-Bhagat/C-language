#include<stdio.h>
int main(){
    float  marks;
    printf("enter your marks batween(0-100):");
    scanf("%f",&marks);

    if ( marks<=30)
    {
        printf("c\n");
    }
    else if ( marks>=30 && marks<=70)
    {
        printf("B\n");

    }

    else if ( marks>=70 && marks<=80)
    {
        printf("B\n");
        
    }
        else if ( marks>=80 && marks<=90)
    {
        printf("A\n");
        
    }

    else{
        printf("A+\n");
    }



    
    return 0;
    

    
}