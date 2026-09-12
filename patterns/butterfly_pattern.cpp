#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    // top
    for (int i = 0; i < n; i++)
    {
        // *: i + 1 times
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        // spaces: (n - 1 - i) * 2
        for (int j = 0; j < (n - 1 - i) * 2; j++)
        {
            cout << " ";
        }

        // * : i + 1 times
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // bottom
    for (int i= 0; i < n; i++)
    {
        // *: n - i
        for (int j = 0; j < n - i ; j++)
        {
            cout << "*";
        }

        // spaces: 2 * i
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }

        // *: n - i
        for (int j = 0; j < n - i ; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}