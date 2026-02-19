#include<bits/stdc++.h>
using namespace std;
 void union_non_Duplicate(vector<int>arr,vector<int>brr){
    vector<int>result;
    for(int i=0;i<arr.size();i++)
    {
        result.push_back(arr[i]);
    }
    for(int i=0;i<brr.size();i++)
    {
        result.push_back(brr[i]);
    }
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
 }
 void union_dupliacte(vector<int>arr,vector<int>brr)
 {
    vector<int>result;
    for(int i=0;i<arr.size();i++)
    {
        result.push_back(arr[i]);
    }
    for(int i=0;i<brr.size();i++)
    {
        result.push_back(brr[i]);
    }
//logic abhi nhi ban paya hai....
    
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
     
 }
int main()
{
    int n,m;
    cout<<"Enter the first array size:";
    cin>>n;
    cout<<"Enter the second array  size:";
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
    //if no duplicates are present in the arrays.
    union_non_Duplicate(arr,brr);
    cout<<endl;
    union_dupliacte(arr,brr);
    return 0;
}