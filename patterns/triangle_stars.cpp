/*
Q. Print "*" in a trangualar for a given n
Example:
n = 5

Output:
*
**
***
****
*****
*/

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
            cout<<"*";
        }
        cout << endl;
    }

    return 0;
}