#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,n,l=0;
    int a=65;
    scanf("%d",&n);
   for ( i = 1; i <= n; i++)
   {
    for ( j =0 ; j < i; j++)
    {
        printf("%c",a+l);
        printf(" ");
        l++;
    }
    printf("\n");
    
   }
   
    return 0;
}
