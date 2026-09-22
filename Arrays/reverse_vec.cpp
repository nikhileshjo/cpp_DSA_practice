#include <iostream>
#include <vector>

using namespace std;

void reverseVec(vector<int>& v)
{
    int l = 0;
    int r = v.size() - 1;
    while (l < r)
    {
        swap(v[l], v[r]);
        l++;
        r--;
    }
}

int main()
{
    vector<int> vec = {1, 2, 3, 4};
    reverseVec(vec);
    cout << "Result vector is..." << endl;
    for (auto e : vec)
    {
        cout << e << " ";
    }
    cout << endl;
}