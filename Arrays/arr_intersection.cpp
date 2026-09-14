// print the intersection of 2 arrays
// Example
// input:
// arr1 = {1, 2, 3, 4, 5}
// arr2 = {6, 7, 3, 1}
// Output:
// 1 3

#include <iostream>

using namespace std;

void arrIntersection(int arr1[], int size1, int arr2[], int size2)
{
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
    cout << endl;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 1, 3};
    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);

    arrIntersection(arr1, size1, arr2, size2);
    return 0;
}