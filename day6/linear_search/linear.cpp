#include<bits/stdc++.h>
using namespace std;
bool linearSearch(int arr[],int size,int target)
{
   for(int i=0;i<size;i++)
   {
    if(target==arr[i])
    {
        return true;
    }
   }
   return false;
}
int main(){
    int arr[]={2,9,6,7,4,12,15};
    int target;
    cout<<"Enter the Target:";
    cin>>target;

   bool check=linearSearch(arr,7,target);
   if(check)
   {
    cout<<"Target is the present in the array"<<endl;
   }
   else{
    cout<<"Target is not present in the array"<<endl;
   }
   return 0;
}