// Two pointer Approcah

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void moveZerosToEnd(int arr[], int n)
{
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
}

int main()
{
    // Write C++ code here

    int arr[] = {1, 2, 0, 0, 0, 4, 5, 6, 0, 5, 55, 0, 1, 0, 3, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    moveZerosToEnd(arr, n);

    cout << "After moving zeros to the end: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}