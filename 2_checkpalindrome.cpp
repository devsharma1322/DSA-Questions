#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s)
{
    int i = 0, j = s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}
int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    if (isPalindrome(str))
    {
        cout << "String is Palindrome";
    }
    else
    {
        cout << "Not palindrome";
    }

    return 0;
}