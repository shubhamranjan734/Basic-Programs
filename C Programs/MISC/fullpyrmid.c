#include<stdio.h>
int main () 
{
    int i,j,k,m;
    for ( i = 1; i <= 5; i++)
    {
       for ( k = 6-i; k > 0; k--)
       {
        printf(" ");
       }
       
       for ( j = 0; j < i; j++)
       {
        printf("%d",j+i);
       }
       if (j==(2*i)-1)
       {
        printf("\n");
       }
       else
       {for ( m = i-2; m >= 0; m--)
       {
        printf("%d",m+i);
       }
       printf("\n");
       }

    }
    
           
           
           




    return 0;
}