#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int m = n - 1;

    
    if ( (n & m) == 0 )
    {
        cout << "Number is a power of 2" << endl;
    }
    else
    {
        cout << "Number is not a power of 2" << endl;
    }

    return 0;
}