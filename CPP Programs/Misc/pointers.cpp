#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 9;
    int y = 10;
    int *ptrx = &x;
    cout << *ptrx << endl;
    ptrx = &y;
    cout << *ptrx << endl;

    return 0;
}