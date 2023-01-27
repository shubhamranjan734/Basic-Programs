#include<stdio.h>
int main () 
{    //Taking input for number of elements
      int n;
      printf("Enter number of elemts which you want to sort = ");
      scanf("%d",&n);

     //Data Input from user
      int i,a[n],j,min,index;
      printf("Enter numbers that you want to sort \n");
      for ( i = 0; i < n; i++)
        scanf("%d",&a[i]);

    // Sorting data
    
      for ( i = 0; i < n; i++)
      { 
        // Finding Minimum
        min=a[i];
        index=i;
        for ( j = i; j < n; j++)
        {   
            if (a[j] < min)
            {
                min=a[j];
                index=j;
            }  
        }
        //Swapping number
         a[index] = a[i];
         a[i] = min;
      }

    //Printing output

     printf("Sorted numbers are \n");
      for ( i = 0; i < n; i++)
      {
        printf("%d \n",a[i]);
      }
    return 0;
}