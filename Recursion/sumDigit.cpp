#include <bits/stdc++.h>
using namespace std;

int isSorted(int *arr, int size)
{

    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    int remainingpart = arr[0] + isSorted(arr + 1, size - 1);
    return remainingpart;
}

int main()
{
    int arr[5] = {2, 4, 6, 8, 9};
    int size = 5;

    int ans = isSorted(arr, size);
    cout << "Sum is: " << ans;
    return 0;
}