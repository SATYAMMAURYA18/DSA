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
            if (target == arr[i][j])
            {
                return true;
            }
        }
    }
    return false;
}
int max_min(vector<vector<int>> &arr)
{
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            if (maxi < arr[i][j])
            {
                maxi = arr[i][j];
            }
            if (mini > arr[i][j])
            {
                mini = arr[i][j];
            }
        }
    }
    cout << "min:" << mini << endl;
    cout << "max:" << maxi << endl;
}
int main()
{
    vector<vector<int>> arr = {{11, 21, 33}, {28, 33, 94}, {41, 62, 72}};
    cout << "Row-wise sum->" << endl;
    print_row_sum(arr);
    cout << "Column-wise sum->" << endl;
    print_column_sum(arr);
    int t;
    cout << "Enter the target:";
    cin >> t;
    bool search = linear_search(arr, t);
    cout << "linear searching->";
    if (search == 1)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    cout << "Printing maximum and minimum:" << endl;
    max_min(arr);
    return 0;
}