#include <bits/stdc++.h>
using namespace std;

// Leetcode 186
void reverse(string str, int i, int j)
{
    while (i < j)
    {
        char temp;
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j++;
    }
}
string reverseWords(string arr)
{
    if (arr.empty())
    {
        return arr;
    }
    int i = 0;
    int j = 0;
    while (j <= arr.length())
    {
        if (j == arr.length() || arr[j] == ' ')
        {
            reverse(arr, i, j - 1);
            i = j + 1;
        }
        j++;
    }
    return arr;
}

int main()
{
    string name = "my name is";
    cout << reverseWords(name);
}