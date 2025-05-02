// Duplicate Alphabet in string

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    string str = "Programming123!!";
    unordered_map<char, int> freq;

    for (char ch : str)
    {
        freq[ch]++;
    }

    cout << "Duplicate characters: ";
    for (auto pair : freq)
    {
        if (pair.second > 1)
            cout << pair.first << " ";
    }

    return 0;
}
