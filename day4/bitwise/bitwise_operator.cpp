#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<(3|4)<<endl;
    cout<<(5&10)<<endl;
    cout<<~1<<endl;
    cout<<!1<<endl;
    cout<<(1^1)<<endl;
    //left shift
    cout<<(5<<1)<<endl;//left shift krne se 2 se multiply hota hai.
   // cout<<(5<<(-1))<<endl;//it will give garbage value.

   int a=6;
   int b=-6;
   cout<<(a<<2)<<endl;//24
   cout<<(b<<2)<<endl;//-24
   int c=-15;
   cout<<(c<<2)<<endl;

   //right shift
    cout<<(5>>1)<<endl;//2 //right shift krne se 2 se divide hota hai.
    cout<<(a>>1)<<endl;//3
    cout<<(b>>1)<<endl;//-3
    cout<<(c>>2)<<endl;//-4

    //ques.
    int d=5;
    cout<<(++d)*(++d)<<endl;
}