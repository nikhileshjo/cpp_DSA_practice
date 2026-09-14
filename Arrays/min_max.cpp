#include <iostream>
#include <climits>
using namespace std;

int main()
{
    size_t size = 5;
    int arr[size] = { 43, 89, 90, 36, 80};

    int smallest = INT_MAX;

    for (int i = 0; i < size; i++)
    {
            smallest = min(arr[i], smallest);
    }

    cout << "Min element: " << smallest << endl;

    return 0;
}