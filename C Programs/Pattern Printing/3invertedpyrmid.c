#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,n;
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j < i; j++)
        {
            printf(" ");
        }
        
        for ( j = 2*(n-i+1)-1; j>0 ; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
