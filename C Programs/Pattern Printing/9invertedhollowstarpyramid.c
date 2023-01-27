#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    printf(" ");
    for ( i = 0; i < 2*n+1; i++)
    {
        printf("*");
    }
    printf("\n");
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < i+2; j++)
        {
            printf(" ");
        }
        if (i == n-2)
        {
            printf(" *");
        }
        else
        {
            printf("*");
            for ( j = 0; j <2*(n-i-1)-1 ; j++)
            {
                printf(" ");
            }
            printf("*");
            
        }
        printf("\n");   
    }
    
    return 0;
}
