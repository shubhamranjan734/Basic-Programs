#include <stdio.h>
int sum_cube_dig();
int main()
{
    int a, count, i;
    printf("Enter number to which you want to find armstrong number = ");
    scanf("%d", &count);
    printf("Armstrong number between 0 to %d are \n", count);

    for (i = 0; i <= count; i++)
    {
        a = sum_cube_dig(i);
        if (a == i)
        {
            printf("%d \n", i);
        }
    }
    return 0;
}
int sum_cube_dig(int a)
{
    int rem, quot = a, sum = 0;
    do
    {
        rem = quot % 10;
        quot = quot / 10;
        sum = sum + (rem * rem * rem);
    } while (quot != 0);
    return (sum);
}