// Array
//1.array is the collection of same dataType.
//2.array store data in a contigious memory allocation.
//3.after initializing by a datatype we can not put another dataType in that array.
//4.array can be access from there index.
#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main()
{
    int arr[]={1,89,54,32,2,34};
    cout<<arr[3]<<endl;
    //now accessesing the element;
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<",";
    }
     cout<<endl;
    //now taking array
    cout<<"Enter the value of second array of size 5:"<<endl;
    int brr[5];
    for(int i=0;i<5;i++)
    {
        cin>>brr[i];
    }
    cout<<"the second array is:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<brr[i]<<",";
    }
    cout<<endl;
    cout<<"Printing character array->"<<endl;
    Sleep(2000);
    char ch[5]={'a','e','i','o','u'};
    for(int i=0;i<5;i++)
    {
        cout<<ch[i]<<",";
    }
    cout<<endl;
    return 0;
} 