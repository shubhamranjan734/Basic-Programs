#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,j,k;
   scanf("%d",&n);
   for ( i = 1; i <= n; i++)
   {
    for ( j = 0; j < 2*n-i; j++)
    printf(" ");
    for ( j = 0; j < i; j++)
     printf("%d",i+j);
     for ( j = 2*i-1; j > i ; j--)
        printf("%d",j-1);
    printf("\n");
   }
     return 0;
}
