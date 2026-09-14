// swap the position of the minimum element and the maximum element of array
#include <iostream>
#include <climits>

using namespace std;

void swapMinMax(int arr[], int size)
{
    int smallest = INT_MAX, s_ind = 0;
    int largest = INT_MIN, l_ind = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            s_ind = i;
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
            l_ind = i;
        }
    }
    swap(arr[s_ind], arr[l_ind]);
    return;
}

int main()
{
    int arr[] = {42, -15, 25, 48};
    int size = sizeof(arr) / sizeof(int);

    swapMinMax(arr, size);

    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}