#include<stdio.h>
int main () 
{
    int i, j,count;
    printf("Enter how many lines you wnat to print = ");
    scanf("%d",&count);
    for ( i = count; i > 0; i--)
    {
        for ( j = i; j > 0; j--)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    
           
           
           




    return 0;
}