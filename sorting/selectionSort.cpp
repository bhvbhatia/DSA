
#include <bits/stdc++.h>
using namepspace std;

void selectionSort(vector<int> &arr, int n)
{
    // Write your code here.
    int min_index;
    for (int i = 0; i < n - 1; i++)
    {
        min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        swap(arr[min_index], arr[i]);
    }
}