#include <iostream>
#include <unordered_map>
using namespace std;

void findDuplicates(int arr[], int n)
{
    unordered_map<int, int> freq;

    // Count frequency
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    cout << "Duplicate elements are: ";
    for (auto it : freq)
    {
        if (it.second > 1)
        {
            cout << it.first << " ";
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 2, 4, 5, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    findDuplicates(arr, n);

    return 0;
}
