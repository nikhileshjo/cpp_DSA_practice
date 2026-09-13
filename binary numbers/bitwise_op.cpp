#include <iostream>
using namespace std;

int main()
{
    cout << (6 & 10) << endl;
    cout << (6 | 10) << endl;
    cout << (6 ^ 10) << endl;

    cout << (10 << 2) << endl;
    cout << (10 >> 1) << endl;

    int i = 10;
    cout << (i++ * 6) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(unsigned) << endl;
    return 0;
}