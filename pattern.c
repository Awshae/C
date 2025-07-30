#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//hollow triangle patte
int main(){
    int n=4,i,j;
    printf("================PATTERN 1=================");
    printf("\n");

    for(i=1; i<=n; i++)
    {
        for(j=1;j<=2*n-1; j++)
        {
            if(i+j==n+1||i==n||j-i==n-1)
            printf("* ");
            else   
                printf("  ");
        }
        printf("\n");
    }
    printf("\n");   

    //reverse z
    printf("================PATTERN 2=================");
    printf("\n");
    for(i=1; i<=n; i++)
    {
        for(j=1;j<=n; j++)
        {
            if(i==1||i==4||i==j)
            printf("*");
            else   
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    //number pattern.
    printf("================PATTERN 3=================");
    printf("\n");
    int x = 1, y = 97;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==1||i==n||i==j)
            {
                if(j%2==1)
                    printf("%c ", y++);
                else   
                    printf("%d ",x++);
            }
            else printf("  ");
        }
        printf("\n");
    }
    printf("\n");

    //number ex pattern.
    printf("================PATTERN 4=================");
    printf("\n");
    n = 5;
    int k = (2*n-1)/2;
    for(i=0; i<2*n-1; i++)
    {
        for(j=0; j<2*n-1; j++)
        {
            int r = abs(i-k)>abs(j-k)?abs(i-k):abs(j-k);
            printf("%d ",r+1);
        }
        printf("\n");
    }
    printf("\n");

    //Pascal triangle pattern.
    printf("================PATTERN 5=================");
    printf("\n");
    for(i=1; i<=n; i++)
    {
        int c=1;
        for(j=1;j<=n-i; j++)
        {
            printf(" ");  
        }
        for(j=1; j<=i;j++)
        {
            printf("%d ",c);
            c = c*(i-j)/j;
        }
        printf("\n");
    }
    printf("\n");

    //String zig-zag pattern.
    printf("================PATTERN 6=================");
    printf("\n");
    char s[] = "HelloWorld";
    int size = strlen(s);
    int row = 3;
    k = 0;
    for(i=0; i<row; i++){
        for(j=0; j<size; j++)
        {
            k = j%(2*row-2);
            if(i==k||k==(2*row-2)-i)
                printf("%c ",s[j]);
            else    
                printf("  ");
        }
    printf("\n");
    }

    printf("\n");
    //Spiral pattern
    printf("================PATTERN 7=================");
    printf("\n");
    n = 5;
    int a[10][10];
    x = 1;
    int top = 0, right = n-1, bottom = n-1, left = 0;
    while(x<n*n)
    {
        for(int i = left; i<=right; i++)
        {
            a[top][i] = x++;
        }
        top++;
        for(int i = top; i<=bottom; i++)
        {
            a[i][right] = x++;
        }
        right--;
        for(int i = right; i>=left; i--)
        {
            a[bottom][i] = x++;
        }
        bottom--;
        for(int i = bottom; i>=top; i--)
        {
            a[i][left] = x++;
        }
        left++;
    }
    for(int i = 0; i<n; i++){
        for(int j = 0;j<n;j++)
        {
            printf("%d  ",a[i][j]);
        }
    printf("\n");
    }
}
