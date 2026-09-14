// print all unique values in an array
// You should print only those value that are seen only once
// Example : I/P = {1, 2, 3, 3} O/P = 1 2
// you do not have to return anything, just print it.

#include <iostream>
using namespace std;

void uniqueArr(int arr[], int size)
{
    bool dupFlag = false;
    for (int i = 0; i < size; i++)
    {
        dupFlag = false;
        for (int j = 0; j < size; j++)
        {
            if ((i != j) && (arr[i] == arr[j]))
            {
                dupFlag = true;
                break;
            }
        }
        if (dupFlag == false)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    int arr[] = {25, 42, 25, 15};
    int size = sizeof(arr) / sizeof(int);
    uniqueArr(arr, size);
    return 0;
}