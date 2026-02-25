#include <bits/stdc++.h>
using namespace std;
void pointer_approach(vector<int>&arr)
{
    int low=0,mid=0;
    int high=arr.size()-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    for(auto num:arr)
    {
        cout<<num<<" ";
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
    pointer_approach(nums);
    return 0;
}