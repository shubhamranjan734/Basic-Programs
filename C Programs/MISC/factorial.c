#include <stdio.h>
int main()
{
    float fact = 1;
    int n, i;
    printf("%f \n", fact);
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%f", fact);

    return 0;
}