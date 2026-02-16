#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<endl;
}
void increasing(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        arr[i]+=10;
    }
    printArray(arr,5);
}
int main()
{
  int arr[5]={3,5,4,2};
  increasing(arr,5);
  printArray(arr,5);
  return 0;
}