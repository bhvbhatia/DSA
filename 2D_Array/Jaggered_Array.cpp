#include <bits/stdc++.h>
using namespace std;

int main()
{

    int rows;
    cout << "Enter rows: ";
    cin >> rows;

    int *number = new int[rows];

    int **array = new int *[rows]; // decalaring an jaggereed array

    for (int i = 0; i < rows; i++)
    {
        cout << "Enter col: ";
        cin >> number[i];
        array[i] = new int[number[i]];
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < number[i]; j++)
        {
            cin >> array[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < number[i]; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}