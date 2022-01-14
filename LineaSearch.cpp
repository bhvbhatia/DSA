#include <bits/stdc++.h>
using namespace std;
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[5] = {5, 7, 9, -4, 67};
    cout << "Enter the element to search ";
    int key;
    cin >> key;
    bool found = search(arr, 5, key);

    if (found)
    {
        cout << "Key is present" << endl;
    }
    else
    {
        cout << "Key is absent";
    }
    return 0;
}