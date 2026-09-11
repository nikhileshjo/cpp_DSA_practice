#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << (i+1); // value depend on the outer loop not the inner loop
        }
        cout << endl;
    }

    return 0;
}