#include<stdio.h>
#include<stdlib.h>
int main () 
{
    int i,n;
    float *height;
    float sum=0,avg;
    printf("Input number of students \n");
    scanf("%d",&n);
    height=(float *) malloc(n*sizeof(float));
    printf("Input heights");
    for ( i = 0; i < n; i++)
    {
        scanf("%f",&height[i]);
    }
    for ( i = 0; i < n; i++)
    {
        sum +=height[i];
    }
    avg=sum/(float)n;
    printf("Average is = %f \n",avg);
    
    
    
           
           
           




    return 0;
}