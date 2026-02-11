#include<bits/stdc++.h>
using namespace std;

float circle(float r)
{
    float area=(3.14)*r*r;
    return area;
}

void even_odd(int num)
{
    if(num%2==0)
    {
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
}

void factorial(int n)
{
    int fact=1;
   for(int i=1;i<=n;i++)
   {
    fact*=i;
   }
   cout<<fact<<endl;
}

void prime_number(int n)
{
   int flag=1;
   for(int i=2;i<n;i++)
   {
    if(n%i==0)
    {
        flag=0;
        break;
    }
   }
   if(flag==1)
   {
    cout<<"PrimeNumber"<<endl;
   }
   else{
    cout<<"Not PrimeNumber"<<endl;
   }
}

void sum(int num)
{
    int sum=0;
    for(int i=1;i<=num;i++)
    {
        sum+=i;
    }
    cout<<sum<<endl;
}

void reverse_Number(int num)
{
    int sum=0;
    int rev;
    while(num!=0)
    {
      rev=num%10;
      sum=sum*10+rev;
      num=num/10;
    }
    cout<<sum<<endl;
}

int  main()
{
    //1.area of circle.
    float area=circle(5.6);
    cout<<area<<endl;
    //2.even or odd number
    even_odd(7);
    //3.factorial number
    factorial(5);
    //4.prime number or not
    prime_number(23);
    //5.print sum of 1 to n.
    sum(100);
    //reverse a number
    reverse_Number(345);
}