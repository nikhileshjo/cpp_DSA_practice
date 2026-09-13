#include <iostream>
using namespace std;

int dec2Bin(int decN)
{
    int ans = 0, pow = 1;
    int rem;
    while (decN)
    {
        rem = decN % 2;
        decN /= 2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int bin2Dec(int binN)
{
    int ans = 0, pow = 1;
    while (binN)
    {
        ans += ((binN) % 10) * pow;
        binN /= 10;
        pow *= 2;
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    int bNumber = dec2Bin(n);

    cout << "(" << n << ")base10 = " << "(" << bNumber << ")base2\n";
    cout << "(" << bNumber << ")base2 = " << "(" << bin2Dec(bNumber) << ")base10\n";
}