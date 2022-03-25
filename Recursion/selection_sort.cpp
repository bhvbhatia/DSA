#include <bits/stdc++.h>
using namespace std;

void sortArray(int *arr, int beginIndex, int n)
{
    if (beginIndex >= n - 1)
    {
        return;
    }
    int minIndex = beginIndex;
    for (int i = beginIndex + 1; i < n; i++)
    {
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
    }
    swap(arr[minIndex], arr[beginIndex]);

    sortArray(arr, beginIndex + 1, n);
}

int main()
{

    int arr[6] = {5, 1, 10, 6, 2, 8};

    sortArray(arr, 0, 6);
    cout << endl;
    cout << "Final Sort: ";
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}