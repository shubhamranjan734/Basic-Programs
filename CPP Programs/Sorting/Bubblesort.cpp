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
    cout << "Enter elemnts of array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void arrayrsorter(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

int main()
{
    int n;
    cout << "Enter no of elements";
    cin >> n;
    int arr[n];

    inputarray(arr, n);

    for (int i = 0; i < n; i++)
    {
        arrayrsorter(arr, n - i);
    }

    printarray(arr, n);

    return 0;
}
