#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; (i * i) <= n; i++)
    {
        if ( n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if (isPrime(n))
    {
        cout << n << " is prime.\n";
    }
    else
    {
        cout << n << " is not prime.\n";
    }

    return 0;
}