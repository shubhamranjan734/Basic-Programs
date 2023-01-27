#include <stdio.h>
int gcd ();
int main()
{   int a,b,hcf,c,d;
    printf("Enter any 4 numbers \n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    hcf=gcd(a,b);
    printf("Hcf is %d",hcf);
    return 0;
}

int gcd (int a,int b)
{
  int i,temp;
  i=a;
  if ( b > a)
  {  a=b;
     b=i;
  }
  
   while ( temp != 0)
   {
     temp = a%b;
      a=b;
      b=temp;
   }
   return (a);
}