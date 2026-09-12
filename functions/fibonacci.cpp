#include <iostream>
#include <vector>
using namespace std;

int nthFib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return nthFib(n - 1) + nthFib(n - 2);
    }
}

int main()
{
    

    cout << nthFib(50) << endl;

    return 0;
}