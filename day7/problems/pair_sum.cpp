#include<bits/stdc++.h>
using namespace std;
void pair_sum(vector<int>arr,int target)
{
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr.size();j++)
        {
            if(i!=j && arr[i]+arr[j]==target)
            {
                cout<<arr[i]<<","<<arr[j]<<endl;
                //for breaking repeatation;
                arr[j]=-1;
            }
        }
    }
}
void triplet_sum(vector<int>arr,int target)
{
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            for(int k=j+1;k<arr.size();k++)
            {
                if(arr[i]+arr[j]+arr[k]==target)
                {
                    cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
                }
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int target;
    cout<<"Enter the target:";
    cin>>target;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    pair_sum(arr,target);
    int target2;
    cout<<"Enter the target for triplet pair:";
    cin>>target2;
    triplet_sum(arr,target2);
    return 0;

}