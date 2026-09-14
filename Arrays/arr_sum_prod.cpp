// get the product ans sum of all the elements of the array

#include <iostream>

using namespace std;

int prod(int arr[], int size)
{
    int ans = 1;
    for (int i = 0; i < size; i++)
    {
        ans *= arr[i];
    }
    return ans;
}

int sum(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans += arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    cout << "Product: " << prod(arr, size) << endl;
    cout << "Summation: " << sum(arr, size) << endl;

    return 0;
}