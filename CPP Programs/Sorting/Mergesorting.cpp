#include <bits/stdc++.h>
using namespace std;

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void inputarray(int arr[], int n)
{
    cout << "Enter elemnts of array : \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void arraycopier(int array[], int start, int temparray[], int end)
{
    for (int i = start; i < end; i++)
    {
        temparray[i - start] = array[i];
    }
}

void merge(int array[], int leftln, int leftarr[], int rightln, int rightarr[])
{
    int i = 0;
    int j = 0;
    int myindex = 0;
    while ((i < leftln) && (j < rightln))
    {
        if (leftarr[i] < rightarr[j])
        {
            array[myindex] = leftarr[i];
            i++;
            myindex++;
        }
        else
        {
            array[myindex] = rightarr[j];
            j++;
            myindex++;
        }
    }
    while (i < leftln)
    {
        array[myindex] = leftarr[i];
        i++;
        myindex++;
    }
    while (j < rightln)
    {
        array[myindex] = rightarr[j];
        j++;
        myindex++;
    }
}

void mergesort(int i, int array[])
{
    if (i < 2)
    {
        return;
    }

    int leftln = i / 2;
    int rightln = (i - leftln);
    int leftarray[leftln], rightarray[rightln];
    arraycopier(array, 0, leftarray, leftln);
    arraycopier(array, leftln, rightarray, i);
    mergesort(leftln, leftarray);
    mergesort(rightln, rightarray);
    merge(array, leftln, leftarray, rightln, rightarray);

    return;
}

int main()
{
    int n;
    cout << "Enter number of elements you want to sort : ";
    cin >> n;
    int array[n];
    inputarray(array, n);
    int rightln = n / 2;
    int leftln = (n - rightln);
    int leftarr[leftln], rightarr[rightln];
    arraycopier(array, 0, leftarr, leftln);
    arraycopier(array, leftln, rightarr, n);

    mergesort(leftln, leftarr);
    mergesort(rightln, rightarr);
    merge(array, leftln, leftarr, rightln, rightarr);

    cout << "Arrray after sorting  : ";
    printarray(array, n);
    return 0;
}
