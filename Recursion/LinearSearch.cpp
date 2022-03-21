#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int *arr, int size, int val)
{

    if (size == 0)
    {
        return false;
    }
    if (arr[0] == val)
    {
        return true;
    }
    else
    {
        bool rem = linearSearch(arr + 1, size - 1, val);
        return rem;
    }
}

int main()
{

    int arr[5] = {5, 6, 7, 3, 10};
    int size = 5;
    int val = 10;

    bool ans = linearSearch(arr, size, val);

    if (ans)
    {
        cout << "Element found";
    }
    else
    {
        cout << "Element not found";
    }
    return 0;
}