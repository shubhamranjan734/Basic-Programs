#include <stdio.h>
int main()
{
    int i,n,j,b;
    scanf("%d",&n);
    b=2*n-1;
    int arr[b][b];
    for ( i = 1; i <= n; i++)
    {
        for ( j = 0; j < 2*i-1; j++)
        {
           arr[n-i+j][n-i]=i;
           arr[n-i][n-i+j]=i;
           arr[n-i+j][b-(n-i)-1]=i;
           arr[b-(n-i)-1][n-i+j]=i;
        }   
    }
    for ( i = 0; i < b; i++)
    {
        for ( j = 0; j < b; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n"); 
    }
    return 0;
}

 





