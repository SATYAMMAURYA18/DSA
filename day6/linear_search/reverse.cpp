#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    int i=0;
    int j=7;
    while(i<=j)
    {
    //    int temp=arr[i];
    //    arr[i]=arr[j];
    //    arr[j]=temp;
    swap(arr[i],arr[j]);
       i++;
       j--;
    }
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<",";
    }
    return 0;
}