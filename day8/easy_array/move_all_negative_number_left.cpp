#include <bits/stdc++.h>
using namespace std;
// brute force;
void move_all_negative(vector<int> &arr)
{
    vector<int> result;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 0)
        {
            result.push_back(arr[i]);
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            result.push_back(arr[i]);
        }
    }
    for (auto val : result)
    {
        cout << val << " ";
    }
}
// sorting technique
void sorting_nums(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    for (auto v : arr)
    {
        cout << v << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the size of the array:";
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    move_all_negative(nums);
    cout << endl
         << "By_sorting_technique" << endl;
    sorting_nums(nums);
    return 0;
}