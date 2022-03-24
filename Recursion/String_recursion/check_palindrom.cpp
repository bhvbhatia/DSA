#include <bits/stdc++.h>
using namespace std;

bool checkPal(string name, int i, int j)
{
    if (i > j)
    {
        return true;
    }
    if (name[i] != name[j])
    {
        return false;
    }
    else
    {
        return checkPal(name, i + 1, j - 1);
    }
}

int main()
{

    string name = "abba";
    cout << endl;
    bool res = checkPal(name, 0, name.length() - 1);
    if (res)
    {
        cout << "palindrome";
    }
    else
    {
        cout << "not palindropme";
    }
    return 0;
}