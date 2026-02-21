#include<bits/stdc++.h>
using namespace std;
void rotate_left(vector<int>arr)
{
    vector<int>result;
    for(int i=1;i<arr.size();i++)
    {
        result.push_back(arr[i]);
    }
    result.push_back(arr[0]);
    for(auto val:result)
    {
        cout<<val<<",";
    }
}
int main()
{
    int n;
    cout<<"Enter the number of element:";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rotate_left(arr);
    return 0;
}