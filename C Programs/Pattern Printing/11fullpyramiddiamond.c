#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,j;
    scanf("%d",&n);
    
    for ( i = 1; i <= n; i++)
    {  for ( j = 0; j < n-i+1; j++)
    {
        printf(" ");
    }
    
        if (i == 1)
        {
            printf(" *");
        }
        else
        {
            printf("*");
            for ( j = 0; j < 2*i-1; j++)
            {
                printf("*");
            }
            printf("*");
        } 
        printf("\n");  
    }
    
    for ( i = n-1; i >= 1; i--)
    {  for ( j = 0; j <n-i+1 ; j++)
    {
        printf(" ");
    }
    
        if (i==1)
        {
            printf(" *");
        }
        else
        {
            printf("*");
            for ( j = 0; j < 2*i-1; j++)
            {
                printf("*");
            }
            printf("*");
        }  
        printf("\n"); 
    }
    
    return 0;
}

