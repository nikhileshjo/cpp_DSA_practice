#include <iostream>
#include <vector>

using namespace std;

int linearSearch(vector<int>& v, int key)
{
    for (int i = 0; i< v.size(); i++)
    {
        if (key == v[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> vec = { 1, 2, 3, 4, 5};
    cout << linearSearch(vec, 4) << endl;

}