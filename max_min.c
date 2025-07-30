#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("Enter a and b:");
    int a,b;
    scanf("%d%d",&a,&b);
    int max = (a+b+abs(a-b))/2;
    int min = (a+b-abs(a-b))/2;
    printf("max is %d\n",max);
    printf("min is %d",min);

}