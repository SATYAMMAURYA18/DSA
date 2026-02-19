#include<bits/stdc++.h>
using namespace std;
void  intersection(vector<int>arr,vector<int>brr)
{
    vector<int>result;
    //int n=min(arr.size(),brr.size());
    for(int i=0;i<arr.size();i++)
    {
       for(int j=0;j<brr.size();j++)
       {
           if(arr[i]==brr[j])
           {
            // now for avoiding repeatition we have to mark that voh element dubara na aa paye.
            brr[j]=-1;
            result.push_back(arr[i]);
           }
       }
    }
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int m;
    cout<<"Enter the second array size:";
    cin>>m;
    vector<int>arr(n);
    vector<int>brr(m);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     for(int i=0;i<m;i++)
    {
        cin>>brr[i];
    }
    intersection(arr,brr);
}