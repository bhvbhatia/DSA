// Leetcode 852
// Q.Peak index in an mountain array.

#include <bits/stdc++.h>
using namespace std;

int peak(int arr[], int size)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{

    int ar[4] = {0, 10, 5, 2};
    cout << peak(ar, 4);
    return 0;
}