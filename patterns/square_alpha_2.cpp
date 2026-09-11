#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    char chr = 'A';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << chr;
            chr++;
        }
        cout << endl;
    }
    return 0;
}