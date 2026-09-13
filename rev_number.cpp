#include <iostream>
using namespace std;

int main()
{
    int n, ans = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n)
    {
        ans = (ans * 10) + (n % 10);
        n /= 10;
    }
    cout << ans << endl;
}