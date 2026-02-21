#include<bits/stdc++.h>
using namespace std;
bool check_sort(vector<int>&arr)
{
   for(int i=0;i<arr.size();i++)
   {
    for(int j=i+1;j<arr.size();j++)
    {
        if(arr[j]<arr[i])
        {
            return false;
        }
    }
   }
   return true;
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
   bool check=check_sort(arr);
   if(check==1)
   cout<<"true"<<endl;
   else
   cout<<"false"<<endl;
   return 0;
}