#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1, k = 1;
        while (j <= i - 1)
        {
            cout << " ";
            j++;
        }
        while (k <= n - i + 1)
        {
            cout << i;
            k++;
        }
        i++;
        cout << endl;
    }

    return 0;
}