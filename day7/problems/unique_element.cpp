//1.unique element problem
#include<bits/stdc++.h>
using namespace std;
int find_unique(vector<int>arr)
{
    int ans=0;
    for(int i=0;i<arr.size();i++)
    {
        ans=ans^arr[i];//xor operator.
        cout<<ans<<" ";
    }
    cout<<endl;
    return ans;
}
int main()
{
   int n;
   cout<<"Enter the number:";
   cin>>n;
   vector<int>nums(n);
   for(int i=0;i<n;i++)
   {
    cin>>nums[i];
   }
   int uniqueElement=find_unique(nums);
   cout<<"Unique element is:"<<uniqueElement<<endl;
   return 0;
}