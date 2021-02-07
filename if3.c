//check if character is alphabet or not
#include<stdio.h>
#include<conio.h>

int main(){
    char ch;
    printf("Enter Character :");
    scanf("%c ",&ch);
    if((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch <= 'Z')){
        printf("it is alphabet");
    }
    else{
        printf("it is not a alphabet");
    }
    return 0;
}