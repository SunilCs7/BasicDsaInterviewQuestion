#include <iostream>
#include <vector>
using namespace std;

// 🔹 Approach 1: Using Sum Formula
int missingNumberSumApproach(vector<int> &nums)
{
    int n = nums.size();
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int num : nums)
    {
        actualSum += num;
    }

    return expectedSum - actualSum;
}

// 🔹 Approach 2: Using XOR
int missingNumberXORApproach(vector<int> &nums)
{
    int n = nums.size();
    int xor1 = 0, xor2 = 0;

    for (int i = 0; i < n; i++)
    {
        xor1 ^= nums[i]; // XOR all array elements
        xor2 ^= i;       // XOR all indices
    }

    xor2 ^= n; // include the last number (n)
    return xor1 ^ xor2;
}

int main()
{
    // ✅ Test case
    vector<int> nums = {3, 0, 1}; // Missing number should be 2

    // 🔍 Using Sum Formula
    int missing1 = missingNumberSumApproach(nums);
    cout << "Missing Number (Sum Approach): " << missing1 << endl;

    // 🔍 Using XOR Approach
    int missing2 = missingNumberXORApproach(nums);
    cout << "Missing Number (XOR Approach): " << missing2 << endl;

    return 0;
}
