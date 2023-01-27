#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int a = 1;
        while (a <= (n - i + 1))
        {
            cout << a << " ";
            a++;
        }
        int b = 1;
        while (b <= 2 * (i - 1))
        {
            cout << "* ";
            b++;
        }
        int c = n - i + 1;
        while (c >= 1)
        {
            cout << c << " ";
            c--;
        }
        i++;
        cout << endl;
    }

    return 0;
}