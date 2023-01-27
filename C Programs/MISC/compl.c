#include<stdio.h>
typedef struct 
{   float real;
    float img;
} complex;
void add();
int main () 
{ 
   complex a,b,c;
   printf("Enter first complex number = ");
   scanf("%f %f",&a.real,&a.img);
   printf("Enter second complex number = ");
   scanf("%f %f",&b.real,&b.img);
      add(&a,&b,&c);                    
   printf("sum is %f + i %f",c.real,c.img);



    return 0;
}
void add(complex *a,complex *b,complex *c)
{
   c -> real=(*a).real+(*b).real;
   (*c).img=(*a).img+(*b).img;
   
}