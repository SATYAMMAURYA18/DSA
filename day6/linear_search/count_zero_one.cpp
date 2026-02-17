#include<bits/stdc++.h>
using namespace std;
void count(int arr[],int n)
{
    int count_zero=0;
    int count_one=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            count_zero++;
        }
        if(arr[i]==1)
        {
            count_one++;
        }
    }
    cout<<"Number of ones:"<<count_one<<" and number of zeors:"<<count_zero<<endl;
}
void maximum(int arr[],int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    cout<<"Maximum number="<<max<<endl;
}
void minimum(int arr[],int n)
{
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    cout<<"Minimum number is="<<min<<endl;
}
int main()
{
    int arr[]={0,1,0,0,0,0,0,1,1,2,1,-4,0,53,4,0};
    int size=16;
    count(arr,size);
    maximum(arr,size);
    minimum(arr,size);
}