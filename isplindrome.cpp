// Online C++ compiler to run C++ program online
#include <iostream>
// #include <algorithm>

using namespace std;

void reverse(string &str) // ✅ pass by reference
{
    int left = 0;
    int right = str.length() - 1;

    while (left < right)
    {
        char temp = str[left];  // ✅ store character, not index
        str[left] = str[right]; // ✅ swap characters
        str[right] = temp;

        left++;
        right--;
    }
}

bool isPalindrome(string str)
{
    string rev = str;

    reverse(rev);

    return str == rev;
}

int main()
{
    // Write C++ code here

    string str = "madam";

    if (isPalindrome(str))
    { // ✅ function call with parameter
        cout << "Palindrome ✅";
    }
    else
    {
        cout << "Not Palindrome ❌";
    }

    return 0;
}