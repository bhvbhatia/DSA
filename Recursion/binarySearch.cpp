#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int *arr, int s, int e, int val)
{

    if (e >= s)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == val)
        {
            return true;
        }
        if (arr[mid] > val)
        {
            return binarySearch(arr, s, mid - 1, val);
        }
        else
        {
            return binarySearch(arr, mid + 1, e, val);
        }
    }
    return false;
}

int main()
{
    int arr[6] = {4, 7, 8, 10, 12, 2};
    int s = 0;
    int e = sizeof(arr) / sizeof(arr[0]);
    int val = 10;

    bool ans = binarySearch(arr, s, e, val);
    if (ans)
    {
        cout << "Element Found";
    }
    else
    {
        cout << "Element not Found";
    }
    return 0;
}