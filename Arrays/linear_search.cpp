#include <iostream>

using namespace std;

int searchVal(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int myArr[] = {1, 2, 3, 4};
    int searchKey = 9;
    cout << "Finding " << searchKey << " ...\n";
    int ind = searchVal(myArr, 4, searchKey);
    if (ind == -1)
    {
        cout << "Value not found\n";
    }
    else
    {
        cout << "Value found at index: " << ind << endl;
    }

    return 0;
}