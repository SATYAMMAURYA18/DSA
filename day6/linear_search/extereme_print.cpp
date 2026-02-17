#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    int i=0;
    int j=7;
    while(i<=j)
    {
       if(i==j)
       {
        cout<<arr[i]<<endl;
       }
       else{
        cout<<arr[i]<<",";
        cout<<arr[j]<<",";
       }
       i++;
       j--;
    }
    return 0;
}