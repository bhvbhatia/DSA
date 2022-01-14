#include <bits/stdc++.h>
using namespace std;
int Max(int arr[], int n)
{
    int max;

    max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }

    return max;
}
int Min(int arr[], int n)
{
    int min;
    min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    return min;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Minimum is " << Min(arr, n) << endl;
    cout << "Maximum is " << Max(arr, n);
}