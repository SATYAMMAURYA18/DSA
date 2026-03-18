#include <bits/stdc++.h>
using namespace std;
void missing_element(vector<int>&nums)
{
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        int index=abs(nums[i]);
        //visited
        if(nums[index-1]>0)
        {
            nums[index-1]*=-1;
        }
    }
   for(int i=0;i<n;i++)
   {
      if(nums[i]>0)
      {
        cout<<i+1<<" ";
      }
   }
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
  missing_element(arr);
    return 0;
}