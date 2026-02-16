#include<bits/stdc++.h>
using namespace std;
int main()
{
    //printing double of that every element
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {
        arr[i]=arr[i]*2;
        cout<<arr[i]<<",";
    }
}