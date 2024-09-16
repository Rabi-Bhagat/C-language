  #include<stdio.h>
  int main(){
    char a;
    printf("enter variable:");
    scanf("%c",&a);

    if (a>='0' && a<='9')
    {
        printf("you enter digit");    
    }

    else{
        printf("You enter character");

    }

    return 0;


    
  }