#include <stdio.h>
#include <math.h>
int rev_num();
int main ()
{
     int num,revnum;
     printf("Enter a Number \n");
     scanf("%d",&num);
     revnum=rev_num(num);
     printf("Reverse number of %d is %d \n",num,revnum);
     if (revnum == num)
        printf("Number is palindrome");
     else
      printf("Number is not plaindrome");    
return (0);
}
int rev_num(int num)
{
    int rem,quot,i=0,revnum=0,a[100],z,m;
     double k ;
    do
    {  rem=num%10;
       quot=num/10;
       num=quot;
       a[i]=rem;
       i++; 

    } while (num != 0);
    for ( z = 0; z <= i; z++)
      
      { k = pow(10,i-z);
      m=k;
       printf("%d",m);
       revnum =revnum+a[z] *m;
       }
     return (revnum); 
}