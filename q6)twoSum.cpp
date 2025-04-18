#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<pair<int, int>> arr;

    // Step 1: Store value with original index
    for (int i = 0; i < n; i++)
    {
        arr.push_back({nums[i], i});
    }

    // Step 2: Sort by value
    sort(arr.begin(), arr.end());

    // Step 3: Two pointers
    int left = 0, right = n - 1;
    while (left < right)
    {
        int sum = arr[left].first + arr[right].first;
        if (sum == target)
        {
            return {arr[left].second, arr[right].second};
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return {};
}
