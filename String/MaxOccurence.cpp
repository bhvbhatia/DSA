#include <bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(string str)
{

    int arr[26] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    int max = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (max < arr[i])
        {
            ans = i;
            max = arr[i];
        }
    }

    char final = 'a' + ans;

    return final;
}
