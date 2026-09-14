// we will reverse the array in place, without creating another array
// Using 2-pointer method

#include <iostream>

using namespace std;

void revArr(int arr[], int size)
{
    int l = 0, r = size - 1;
    while (l < r)
    {
        swap(arr[l], arr[r]);

        l++;
        r--;
    }
    return;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    cout << "The given array:\n";
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    revArr(arr, sizeof(arr)/sizeof(int));

    cout << "The updated array:\n";
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}