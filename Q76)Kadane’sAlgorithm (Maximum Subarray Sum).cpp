// 6. * *Kadane’s Algorithm(Maximum Subarray Sum) * *

#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n) {
    long long sum = 0, maxi = LONG_MIN;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum > maxi) {
            maxi = sum;
        }
        if (sum < 0) {
            sum = 0;
        }
    }
    return maxi;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long result = maxSubarraySum(arr, n);
    cout << "Maximum Subarray Sum is: " << result << endl;

    return 0;
}

