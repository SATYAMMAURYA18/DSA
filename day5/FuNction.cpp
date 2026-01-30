#include<bits/stdc++.h>
using namespace std;

//Function-> Repeation ko km krta hai.
//function-> ek task ko baar baar uske ke liye hm function ka use krte hai.

void printName(int a)
{
  for(int i=0; i<a;i++)
  {
    cout<<"Hello,Satyam"<<endl;
  }
}

int Sum(int a, int b)
{
  return a+b;
}

void printNUmber(int n)
{
  for(int i=1; i<=n;i++)
  {
    cout<<i<<",";
  }
  cout<<endl;
}
// in the whole code only one main block of function that execute all the program.
//in programing first main function call hota hai.
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    printName(n);
    cout<<Sum(4,5)<<endl;
    printNUmber(n);
    
    return 0;// 0 ka matlb successfully execution.
} 