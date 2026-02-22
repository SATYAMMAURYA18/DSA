#include <bits/stdc++.h>
using namespace std;
// brute force code
int consecutive_one(vector<int>&arr)
{
    int cnt=0;
    int maxi=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==1)
        {
            cnt++;
        }
        else{
            cnt=0;
        }
        maxi=max(maxi,cnt);
    }
    return maxi;
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
   int count=consecutive_one(arr);
   cout<<count<<endl;
    return 0;
}