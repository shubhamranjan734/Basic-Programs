// C Program to Reverse a Number & Check if it is a Palindrome //
#include <stdio.h>
int exponent(int a, int b);
int main()
{
   int num, a[10], i = 0, digits, reversenumber = 0, num1;
   printf("Enter number \n");
   scanf("%d", &num);
   num1 = num;
   do
   {
      a[i] = num % 10;
      num = num / 10;
      i++;

   } while (num != 0);
   digits = i;
   printf("Number of digits is %d \n", digits);
   printf("Reverse Number is ");
   for (i = 0; i < digits; i++)
   {
      reversenumber = reversenumber + (a[i] * exponent(digits, i));
   }
   printf("%d \n", reversenumber);

   // for checking palindrome
   if (reversenumber == num1)
   {
      printf("Number is palindrome");
   }

   else
   {
      printf("Number is not palindrome");
   }

   return 0;
}

int exponent(int a, int b)
{
   int result = 1, i;
   for (i = 0; i < a - b - 1; i++)
   {
      result = result * 10;
   }

   return (result);
}