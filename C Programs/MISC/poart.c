#include<stdio.h>
int main () 
{
    int a,b=30;
    a=50;
    int *p,*q;
    p=&a;
    q=&b;
    printf("a = %d \n",p);
    printf("b= %d \n",q);
    p=0;
    printf("a = %d \n",p);

           
           
           




    return 0;
}