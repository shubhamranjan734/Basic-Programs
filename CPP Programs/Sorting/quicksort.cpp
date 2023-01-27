#include <bits/stdc++.h>
using namespace std;

int partition(int array[], int start, int end)
{
    int pivot = array[end];
    int pindex = start;
    for (int i = start; i < end; i++)
    {
        if (array[i] <= pivot)
        {
            swap(array[i], array[pindex]);
            pindex++;
        }
    }
    swap(array[pindex], array[end]);

    return pindex;
}

void quicksort(int start, int end, int array[])
{
    int partitionindex;

    if (start >= end)
    {
        return;
    }

    partitionindex = partition(array, start, end);
    quicksort(start, partitionindex - 1, array);
    quicksort(partitionindex + 1, end, array);

    return;
}

int main()
{
    int n = 15;
    int array[] = {-5, -89, 6, 9, 4, 1, 0, -800, -900, -0, 97, 852, 213, 14, 98};
    quicksort(0, n - 1, array);

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}
