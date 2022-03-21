#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int size)
{

    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    bool remainingpart = isSorted(arr + 1, size - 1);
    return remainingpart;
}

int main()
{
    int arr[5] = {2, 4, 6, 8, 9};
    int size = 5;

    bool ans = isSorted(arr, size);
    if (ans)
    {
        cout << "Array is sorted";
    }
    else
    {
        cout << "Array is not sorted";
    }
    return 0;
}