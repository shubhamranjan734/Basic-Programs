#include <stdio.h>
int main()
{
    int i,n,j,k;
    scanf("%d",&n);
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-i; j++)
            printf(" ");
        for ( j = 0; j < 2*i+1; j++)
        {
            if (i==0)
            { 
                printf(" *");
            }
            else
            {printf("*");
            for ( j = 0; j < 2*(i+1)-1; j++)
            printf(" ");
            printf("*");    
            }  
        }
        printf("\n");    
        
    } 
     printf(" ");
    for ( i = 0; i < 2*n+1; i++)
        {
            printf("*");
        }   
    return 0;
}
