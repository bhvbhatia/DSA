#include <bits/stdc++.h>
using namespace std;
/*
int getPivot(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
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
*/
// recursive approach

int getPivot(int arr[], int low, int high)
{
    int mid = low + (high - low) / 2;
    if (low >= high)
    {
        return low;
    }
    if (arr[mid] >= arr[0])
    {
        return getPivot(arr, mid + 1, high);
    }
    else
    {
        return getPivot(arr, low, mid);
    }
}
int main()
{

    int ar[5] = {3, 8, 10, 17, 1};
    cout << getPivot(ar, 0, 4);
    return 0;
}