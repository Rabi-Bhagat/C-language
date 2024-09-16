#include<stdio.h>
int main(){ 
int marks1,marks2,marks3;

printf("enter your marks1\n:");
scanf("%d",&marks1);

printf("enter your marks2\n:");
scanf("%d",&marks2);

printf("enter your marks3 \n:");
scanf("%d",&marks3);

if(marks1<=35 || marks2<=35 || marks3<=35  ){
    printf("you are in individual subject\n");
}
else if((marks1+marks2+marks3)/3 <= 40){
    printf("you are failed due to individual marks");
}
else{
    printf("you are pass");

}

return 0;
   
 }