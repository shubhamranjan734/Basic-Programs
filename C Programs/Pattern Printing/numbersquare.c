#include <stdio.h>
int shubham(int a,int n,int arr[][]);

int main()
{
    int i,n,j,b;
    scanf("%d",&n);
    b=2*n-1;
    int arr[b][b];
    for ( i = 1; i <= 4; i++)
    {
        shu(i,n,arr);
    }
    return 0;
}
int shubham(int a,int n,int arr[][])

{
 for (int i = 0; i < 2*a-1; i++)
 {

     arr[n-a+i][n-a]=a;
 }
 

}
