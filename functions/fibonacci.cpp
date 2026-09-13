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
        int n = 0, m = 1, sum = 0;
        for (int i = 2; i <= n; i++)
        {
            sum = n + m;
            n = m;
            m = sum;
        }
        return sum;
    }
}

int main()
{
    cout << nthFib(50) << endl;

    return 0;
}