#include<bits/stdc++.h>
using namespace std;
//binaryToDecimal
void binaryToDecimal(int num)
{
     long long decimal=0;
     int a=1;
     for(int i=0;num!=0;i++)
     {
        int rem=num%10;
        decimal=rem*a+decimal;
        num/=10;
        a*=2;
     }
     cout<<decimal<<endl;
}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;

   binaryToDecimal(n);
}