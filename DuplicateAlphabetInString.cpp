#include <iostream>
#include <map>
using namespace std;

void printDuplicateAlphabets(string str)
{
    map<char, int> freq;

    // Count frequency of each character
    for (char ch : str)
    {
        if (isalpha(ch)) // optional: only count letters
            freq[ch]++;
    }

    cout << "Duplicate alphabets are: ";
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
    string str = "programming";

    printDuplicateAlphabets(str);

    return 0;
}
