#include<bits/stdc++.h>
using namespace std;
void wave_print(vector<vector<int>>mat)
{
    int row=mat.size();
    int col=mat[0].size();
    for(int startCol=0;startCol<col;startCol++)
    {
        //even no of col -> Top to bottom
        if((startCol&1)==0)
    {
        for(int i=0;i<col;i++)
        {
            cout<<mat[i][startCol]<<" ";
        }
    }
    else{
        //odd no of col ->Bottom to top
        for(int i=row-1;i>=0;i--)
        {
            cout<<mat[i][startCol]<<" ";
        }
    }
    cout<<endl;
    }
}
int main()
{
    vector<vector<int>>mat{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}
    };
    wave_print(mat);
    return 0;
}