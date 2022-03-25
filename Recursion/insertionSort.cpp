#include <bits/stdc++.h>
using namespace std;

void sortArray(int *arr, int begin, int n)
{
    if (begin >= n)
    {
        return;
    }
    int temp = arr[begin];
    int j = begin - 1;
    for (; j >= 0; j--)
    {
        if (arr[j] > temp)
        {
            arr[j + 1] = arr[j];
        }
        else
        {
            break;
        }
    }

    arr[j + 1] = temp;

    sortArray(arr, begin + 1, n);
}

int main()
{

    int arr[6] = {8, 10, 1, 4, 7, 3};

    sortArray(arr, 1, 6);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}