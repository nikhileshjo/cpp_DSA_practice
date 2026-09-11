#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < (n - i - 1) ; j++)
        {
            cout << " ";
        }

        // left triangle
        for (int k = 1; k <= (i + 1); k++)
        {
            cout << k;
        }

        // right triangle
        for (int l = i; l > 0; l--)
        {
            cout << l;
        }
        cout << endl;
    }
}