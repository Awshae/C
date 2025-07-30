#include<stdio.h>
int main(){
    //note, range is -128 to 127. after 127 it returns to -128.
    char a = 90;
    a = a+120;
    printf("%d",a);
}