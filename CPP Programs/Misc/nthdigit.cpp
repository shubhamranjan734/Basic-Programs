#include <bits/stdc++.h>
using namespace std;
int noofdigits(int digits, int *ptr)
{
    double i = 1, sum = 0, expo = 0;
    while (digits > sum)
    {
        expo = i * 9 * (pow(10, i - 1));
        sum = sum + expo;
        i++;
    }
    *ptr = sum - expo;
    return (i - 1);
}

int rangefinder(int n, int remdigits, int *ptrrr)

{
    int sum = 0, k = n;
    double expo = 0;
    while (remdigits >= 0)
    {
        expo = pow(10, k - 1);
        if (n * expo >= remdigits)
        {
            k--;
            if (k <= 0)
                return (sum);
            expo = pow(10, k - 1);
        }
        if ((remdigits - (n * expo)) >= 0)
        {
            sum = sum + (expo);
            *ptrrr = remdigits = remdigits - (n * expo);
        }
    }
}

int digitgiver(int n, int number, int length)
{
    int rem;
    int i = length - n + 1;
    while (i > 0)
    {
        rem = number % 10;
        number = number / 10;
        i--;
    }

    return (rem);
}

int main()
{
    int digit = 110, n, remdigit = 0, sum = 0, remainderdigit = 0;
    int *ptr = &sum;
    // cin >> digit;
    *ptr = 0;
    int *ptrrrr = &remainderdigit;

    n = noofdigits(digit, ptr);
    remdigit = digit - sum;
    double number = (pow(10, n - 1)) - 1;
    number = number + rangefinder(n, remdigit, ptrrrr);
    int requirednumber = digitgiver(remainderdigit, number + 1, n);

    cout << "Required number = " << requirednumber;
    return 0;
}
