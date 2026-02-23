#include <bits/stdc++.h>
using namespace std;
void print_row_sum(vector<vector<int>> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < arr[i].size(); j++)
        {
            sum += arr[i][j];
        }
        cout << "sum of" << i << "th row is=" << sum << endl;
    }
}
void print_column_sum(vector<vector<int>> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < arr[i].size(); j++)
        {
            sum += arr[j][i];
        }
        cout << "sum of" << i << "th column is=" << sum << endl;
    }
}
bool linear_search(vector<vector<int>> &arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
           if(target==arr[i][j])
           {
            return true;
           }
        }
    }
    return false;
}
int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {2, 3, 4}, {4, 6, 2}};
    cout << "Row-wise sum->" << endl;
    print_row_sum(arr);
    cout << "Column-wise sum->" << endl;
    print_column_sum(arr);
    int t;
    cout << "Enter the target:";
    cin >> t;
    bool search = linear_search(arr, t);
    cout<<"linear searching->";
    if(search==1)
    {
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}