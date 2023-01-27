#include<stdio.h>
int main () 
{
    int i,j,count;
    printf("How many lines of half parymid you want = ");
    scanf("%d",&count);
    for ( i = 1; i <= count; i++)
    {
        for ( j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    


    return 0;
}