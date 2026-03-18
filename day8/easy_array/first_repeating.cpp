#include <bits/stdc++.h>
using namespace std;

// brute force code i am using frequency using new vector it can be optimise with unoreder map.
int first_repeating_element(vector<int> &nums)
{
    vector<int> newElement(100, 0);
    for (int i = 0; i < nums.size(); i++)
    {
        newElement[nums[i]]++;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (newElement[nums[i]] >= 2)
        {
            return i + 1;
        }
    }
    return -1;
}

// now using optimal approach hashing using unordered map;
int first_repeating_element(vector<int> &nums)
{
    unordered_map<int, int> hash;
    for (int i = 0; i < nums.size(); i++)
    {
        hash[nums[i]]++;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (hash[nums[i]] >= 2)
        {
            return i + 1;
        }
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
    int ans = first_repeating_element(arr);
    cout << ans << endl;
}