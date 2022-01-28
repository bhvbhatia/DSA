// Search in rotated sorted array.
// Q.33 Leetcode
#include <bits/stdc++.h>
using namespace std;

int Asearch(int nums[], int size, int target)
{
    int s = 0;
    int e = size - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        if (nums[s] <= nums[mid])
        {
            if (target >= nums[s] && target <= nums[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        else
        {
            if (target >= nums[mid] && target <= nums[e])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    int nums[7] = {4, 5, 6, 7, 0, 1, 2};
    cout << "Found at index " << Asearch(nums, 7, 0);

    return 0;
}