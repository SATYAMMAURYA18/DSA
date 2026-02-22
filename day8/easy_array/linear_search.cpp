#include<bits/stdc++.h>
using namespace std;
int missing_number(vector<int>&arr,int target)
{
    int index=-1;
    for(int i=0;i<arr.size();i++)
    {
        if(target==arr[i])
        {
            index=i;
            break;
        }
    }
    return index;
}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int target;
    cout<<"Enter the Target:";
    cin>>target;
    vector<int>arr(n);
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }
   int result=missing_number(arr,target);
   cout<<arr[result]<<endl;
}