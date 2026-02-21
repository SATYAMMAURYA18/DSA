#include<bits/stdc++.h>
using namespace std;
int find_max(vector<int>&arr)
{
    int max=INT_MIN;
    for(int i=0;i<arr.size();i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   int max=find_max(arr);
   cout<<max<<endl;
}