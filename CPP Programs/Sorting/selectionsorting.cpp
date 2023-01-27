#include <bits/stdc++.h>
using namespace std;

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void inputarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int minimunfind(int arr[], int n, int sp)
{
    int temp, index = sp;
    temp = arr[sp];
    for (int i = sp; i < n; i++)
    {
        if (arr[i] < temp)
        {
            temp = arr[i];
            index = i;
        }
    }

    return index;
}

void sortedarray(int arr[], int n)
{

    int temp, minindex;

    for (int i = 0; i < n; i++)
    {

        minindex = minimunfind(arr, n, i);
        temp = arr[minindex];
        arr[minindex] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int n;
    cout << "Enter no of elemnts = ";
    cin >> n;
    int arr[n];
    cout << "Enter enumbers you want to sort : ";
    inputarray(arr, n);

    sortedarray(arr, n);

    cout << "Sorted array is : \n";
    printarray(arr, n);

    return 0;
}
