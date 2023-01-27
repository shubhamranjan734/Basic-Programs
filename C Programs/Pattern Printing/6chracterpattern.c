#include <stdio.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    int a=65;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j <=i; j++)
        {
            printf("%c",a+i);
        }   
        printf("\n");
    }
    return 0;
}
