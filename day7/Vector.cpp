// vector is a dynamic array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums;
     nums.push_back(3);
     for(int i=0;i<nums.size();i++)
     {
        cout<<nums[i]<<" ";
     }
     cout<<endl;
     nums.push_back(34);
     nums.push_back(8);
     nums.push_back(2);
     for(int i=0;i<nums.size();i++)
     {
        cout<<nums[i]<<" ";
     }
     cout<<endl;
     nums.pop_back();
      for(int i=0;i<nums.size();i++)
     {
        cout<<nums[i]<<" ";
     }
     cout<<endl;
    //checking vector is empty or not
    cout<<nums.empty()<<endl;// if false it will return 0,if true then return 1.
    


}