#include <iostream>
#include <string>
using namespace std;

void reverseString(string &s)
{
    int start = 0;
    int end = s.size() - 1;

    while (start < end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }
}

int main()
{
    string s = "hello";
    reverseString(s);
    cout << s;
    return 0;
}
