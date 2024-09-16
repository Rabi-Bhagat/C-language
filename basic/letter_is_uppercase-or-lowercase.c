#include<stdio.h>
int main(){
    char ch;
    printf("enter your  character:");
    scanf("%c",&ch);
    if(ch>'a' && ch<'z'){
        printf("you entered lowercase leter");
    }
    else if( ch>'A' && ch<'Z'){
        printf("you entered a uppercase letter");
        
    }
    else{
        printf("you enter any special symbol");
    }
    return 0;
             }