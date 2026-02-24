#include <bits/stdc++.h>
using namespace std;
void transpose(vector<vector<int>> &arr)
{
    int n = arr.size();
    int m = arr[0].size();
    vector<vector<int>> result(m, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            result[i][j] = arr[j][i];
        }
    }
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[0].size(); j++)
        {
            cout << result[i][j] << ",";
        }
        cout << endl;
    }
}
int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    transpose(arr);
    return 0;
}