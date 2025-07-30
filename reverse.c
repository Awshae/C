#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
    char a[100]; //= "hello world boing boing;.";
    scanf("%[^\n]s",a);
    int n,i,j;
    for(i=0;a[i]!='\0';i++){}
    n = i;
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==' ')
        {
            for(j=i+1;j<n;j++)
                printf("%c",a[j]);
            printf(" ");
            n=i;
        }
    }
    for(i=0;i<n;i++)
        printf("%c",a[i]);
    
}