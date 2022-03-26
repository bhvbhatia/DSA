#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int minArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[minArrayIndex++];
    }
    minArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[minArrayIndex++];
    }

    int index1 = 0;
    int index2 = 0;
    minArrayIndex = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[minArrayIndex++] = first[index1++];
        }
        else
        {
            arr[minArrayIndex++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[minArrayIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[minArrayIndex++] = second[index2++];
    }
}

void mergesort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;

    // sort the left part
    mergesort(arr, s, mid);

    // sort the right part
    mergesort(arr, mid + 1, e);

    // merge 2 sorted arrays
    merge(arr, s, e);
}

int main()
{
    int arr[5] = {2, 5, 1, 6, 9};
    int n = 5;

    mergesort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}