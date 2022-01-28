// Find the square root with precision values by using binary search.

#include <bits/stdc++.h>
using namespace std;

long long int binarySearch(int n)
{
    int s = 0;
    int e = n;
    int ans = -1;

    long long int mid = s + (e - s) / 2;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
double Moreprecision(int n, int precision, int tempsol)
{
    double factor = 1;
    double ans = tempsol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number ";
    cin >> n;
    int tempsol = binarySearch(n);
    cout << "Answer is " << Moreprecision(n, 3, tempsol) << endl;
    return 0;
}