#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cin>>name;
    char ch=name[0];
    switch(ch)//in switch expression will be any character or number,it will not take string but it can take enum.
    {
     case 'A':
           cout<<"A"<<endl;
           break;
    case 'B':
          cout<<"B"<<endl;       
          break;
    case 'S':
    
        cout<<"Hello,Satyam"<<endl;     
        break; 
    default:
        cout<<"Ram"<<endl;    
    }
}