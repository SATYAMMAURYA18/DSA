#include<bits/stdc++.h>
using namespace std;
int find_second_max(vector<int>&arr)
{
    int max=INT_MIN;
    int second_max=INT_MIN;
    //finding first largest;
    for(int i=0;i<arr.size();i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    //now second largest
    for(int i=0;i<arr.size();i++)
    {
        if(second_max<arr[i] && arr[i]!=max)
        {
            second_max=arr[i];
        }
    }
    return second_max;
}
int find_second_min(vector<int>&arr)
{
    int min=INT_MAX;
    int second_min=INT_MAX;
    //finding first largest;
    for(int i=0;i<arr.size();i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    //now second largest
    for(int i=0;i<arr.size();i++)
    {
        if(second_min>arr[i] && arr[i]!=min)
        {
            second_min=arr[i];
        }
    }
    return second_min;
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
   int second_max=find_second_max(arr);
   int second_min=find_second_min(arr);
   cout<<second_max<<endl;
   cout<<second_min<<endl;
   return 0;
}