#include <stdio.h>
int main()
{
    int i, n, j;
    printf("Enter input");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    for (i = n - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
