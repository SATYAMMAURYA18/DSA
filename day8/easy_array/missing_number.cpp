#include <bits/stdc++.h>
using namespace std;
// brute force code
int missing_number(vector<int> &arr){
    int n=arr.size();
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int sum2=0;
    for(int i=1;i<=n+1;i++)
    {
        sum2+=i;
    }
    return (sum2-sum);
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
    int result = missing_number(arr);
    cout<<result<<endl;
    return 0;
}