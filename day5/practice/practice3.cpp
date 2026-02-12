#include<bits/stdc++.h>
using namespace std;
//decimal to binary;
void binary_number(int num)
{
    long long bina=0;
    int a=1;
    for(int i=0;num!=0;i++)
    {
        int rev=num%2;
        cout<<rev<<endl;
        bina=rev*a+bina;
        num/=2;
        a*=10;
    }
    cout<<bina<<endl;
}
void using_bit_operator(int num)
{
    long long bina=0;
    int a=1;
    while(num>0)
    {
        int rev=num&1;
        cout<<rev<<endl;
        bina=rev*a+bina;
        num=num>>1;
        a*=10;
    }
    cout<<bina<<endl;
}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    binary_number(n);
    cout<<"using  bit operator\n";
    using_bit_operator(n);
    return 0;
}