#include <stdio.h>
int main()
{

    int a[] = {1, 2, 3, 4, 5};
    int *p;
    p = a;
    p--;
    printf("%d \n", *p);
    printf("%d", &a[0]);

    return 0;
}