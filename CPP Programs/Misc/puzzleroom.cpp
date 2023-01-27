#include <bits/stdc++.h>
using namespace std;

int arraysearch(int patharray[], int x, int count)

{
    for (int i = 1; i < count + 1; i++)
    {
        if (patharray[i] == x)
            return 0;
    }
    return 1;
}

int pathfinder(int n, int array[16][4], int count, int patharray[])
{

    if (n == 4)
    {

        cout << "given path =  ";
        for (int i = 0; i < count + 1; i++)
        {
            cout << patharray[i] << " ";
        }
        cout << endl;
        return 1;
    }

    else
    {
        for (int i = 0; i < 4; i++)
        {
            int x = array[n - 1][i];
            if ((x != 0) && arraysearch(patharray, x, count))
            {
                n = array[n - 1][i];
                count++;

                patharray[count] = n;
                pathfinder(n, array, count, patharray);
            }
        }
    }

    return 0;
}

int main()
{
    int array[16][4] = {{0, 0, 2, 5}, {0, 1, 3, 6}, {0, 2, 4, 7}, {4, 4, 4, 4}, {0, 1, 6, 9}, {2, 5, 7, 10}, {3, 6, 8, 11}, {0, 4, 7, 12}, {0, 5, 10, 13}, {6, 9, 11, 14}, {7, 10, 12, 15}, {0, 8, 11, 16}, {0, 0, 9, 14}, {0, 10, 13, 15}, {0, 11, 14, 16}, {0, 0, 12, 15}};

    int n;
    n = 13;
    int count = 0;
    int patharray[16] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    pathfinder(n, array, count, patharray);

    return 0;
}
