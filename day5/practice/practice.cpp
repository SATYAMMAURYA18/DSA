#include<bits/stdc++.h>
using namespace std;
//1.max of three numbers
int maximum(int a,int b,int c)
{
  if(a>b && a>c)
  {
    return a;
  }
  else if(b>a && b>c)
  {
    return b;
  }
  else{
    return c;
  }
  //except if else comparison we can use ternary operator
 //   return (a>b)?(a>c?a:c):(b>c?b:c);
}
int main()
{
   int max=maximum(3,14,5);
   cout<<max<<endl;
   return 0;
}