/*
    Author : Sonu kumar kushwaha
*/

#include<stdio.h>

int main(){
    char str[]="Ibqqz!Cjsuiebz",*p;
    p=str;
    while(*p!='\0')
    --*p++;
    printf("%s",str);

    return 0;
}
