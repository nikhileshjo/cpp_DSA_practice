// return the index that has the minimum/maximum values stored in them
#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int arr[] = { 43, 89, 90, 36, 80};
    size_t size = sizeof(arr)/sizeof(int);

    int smallest = INT_MAX, sInd;
    int largest = INT_MIN, lInd;

    for (int i = 0; i < size; i++)
    {
        if ( arr[i] < smallest)
        {
            smallest = arr[i];
            sInd = i;
        }
        if ( arr [i] > largest)
        {
            largest = arr[i];
            lInd = i;
        }
    }

    cout << "Largest number is: " << largest << " at index: " << lInd << endl;
    cout << "Smallest number is: " << smallest << " at index: " << sInd << endl;

    return 0;
}