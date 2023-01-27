#include <bits/stdc++.h>
using namespace std;
int sortedindexfinder(int array[], int length)
{
    int i = 0, index = length - 1;
    for (i = 0; i < length - 1; i++)
    {
        if (array[i] > array[i + 1])
        {
            index = i;
            break;
        }
    }
    return index;
}

void arraycopier(int array[], int index, int temparray[])
{
    for (int i = 0; i < index + 1; i++)
    {
        array[i] = temparray[i];
    }
}

int rightpositionfinder(int array[], int elemntindex, int lenth)
{
    int index = lenth;
    for (int i = 0; i < lenth; i++)
    {
        if (array[i] > array[elemntindex])
        {
            index = i;
            break;
        }
    }
    return index;
}

void arrayshifter(int temparray[], int rightindex, int lenth)
{

    for (int i = lenth; i >= rightindex; i--)
    {
        temparray[i + 1] = temparray[i];
    }
}

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

void rightplacekeeper(int array[], int index, int lenght, int temparray[])
{
    int rightindex, i = 0;
    arraycopier(temparray, lenght, array);
    for (i = index + 1; i < lenght; i++)
    {
        rightindex = rightpositionfinder(array, i, lenght);
        arrayshifter(temparray, rightindex, lenght);
        temparray[rightindex] = array[i];
        arraycopier(array, i, temparray);
        arraycopier(temparray, lenght, array);
        i = sortedindexfinder(array, lenght);
    }
}

int main()
{
    int n;
    cout << "Enter no of elements you want to sort" << endl;
    cin >> n;
    int array[n];
    inputarray(array, n);

    int temparray[2 * n];
    int index;
    index = sortedindexfinder(array, n);
    while (index != n - 1)
    {
        rightplacekeeper(array, index, n, temparray);
        index = sortedindexfinder(array, n);
    }
    cout << "Array after sorting ";
    printarray(array, n);

    return 0;
}
