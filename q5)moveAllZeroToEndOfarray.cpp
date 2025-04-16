#include <iostream>
#include <vector>
using namespace std;

// 🔹 Approach 1: Two-pointer - Place non-zero, then fill zeros
void moveZerosToEndApproach1(vector<int> arr)
{
    int j = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            arr[j] = arr[i];
            j++;
        }
    }

    while (j < arr.size())
    {
        arr[j] = 0;
        j++;
    }

    cout << "Approach 1 (Two-pointer placement): ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;
}

// 🔹 Approach 2: Swapping non-zero with front
void moveZerosToEndApproach2(vector<int> arr)
{
    int j = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    cout << "Approach 2 (Swapping): ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;
}

int main()
{
    vector<int> arr = {0, 1, 0, 3, 12};

    // Run both approaches
    moveZerosToEndApproach1(arr);
    moveZerosToEndApproach2(arr);

    return 0;
}
