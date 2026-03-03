#include <bits/stdc++.h>
using namespace std;

// brute force code
// time complexity of this brute force code is O(N^2);
int duplicate_number(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        for (int j = 0; j < arr.size(); j++)
        {
            if (i != j && element == arr[j])
            {
                return element;
            }
        }
    }
    return -1;
}

// less optimal approach
//  time complexity of the question is O(NlogN)+O(n-1)=O(nlogn);
int duplicate_number(vector<int> &nums)
{
    sort(nums.begin(), nums.end());           // T.C=O(nlogn);
    for (int i = 0; i < nums.size() - 1; i++) // T.C=(n-1);
    {
        if (nums[i] == nums[i + 1])
        {
            return nums[i];
        }
    }
    return -1;
}

// optimal approach
//t.c=O(N) but in this case we are modifying the array.
int duplicate_number(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int index = abs(nums[i]);
        // already visited;
        if (nums[index] < 0)
        {
            return index;
        }
        // visited mark
        nums[index] *= -1;
    }
    return -1;
}

int main()
{
    int n;
    cout << "enter the size of the array:";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int duplicate = duplicate_number(arr);
    cout << duplicate << endl;
    return 0;
}