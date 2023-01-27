#include <stdio.h>
int main ()
{   int n,temp;
     printf("Enter numbe rof elemnts you wan tto enter");
     scanf("%d",&n);   
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
     
     temp=array[0];
      for ( int i = 0; i < n; i++)
      {
        if (array[i] > temp)
        {
            temp=array[i];
        }
      }
        
    printf("Largets Elemet is %d",temp);    
        
        
        
        
        
}        