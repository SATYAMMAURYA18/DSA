#include<bits/stdc++.h>
using namespace std;
//brute force code 
void rotate_array(vector<int>&arr,int k)
{
    if(arr.size()==0)
    return;
    //normalizing the condition if k>=arr.size();
    k=k%arr.size();
    vector<int>result;
    for(int i=k;i<arr.size();i++)
    {
        result.push_back(arr[i]);
    }
    for(int i=0;i<k;i++)
    {
        result.push_back(arr[i]);
    }
    for(auto val:result)
    {
        cout<<val<<" ";
    }
}
int main()
{
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int k;
    cout<<"Enter the number of rotation:";
    cin>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rotate_array(arr,k);
   return 0;
}