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

void count_Number(int num)
{
   for(int i=1;i<=num;i++)
   {
    cout<<i<<",";
   }
}
void grade(int num){
    if(num>=90)
    {
      cout<<"Grade A"<<endl;
    }
    else if(num>=70 && num<90)
    {
      cout<<"Grade B"<<endl;
    }
    else{
      cout<<"Grade C"<<endl;
    }
}
int main()
{
   int max=maximum(3,14,5);
   cout<<max<<endl;
   count_Number(10);
   cout<<endl;
   grade(93);
   return 0;
}