#include <bits/stdc++.h>
using namespace std;
void transpose(vector<vector<int>> &arr)
{
    vector<int> result;
    int top = 0;
    int bottom = arr.size() - 1;
    int left = 0;
    int right = arr[0].size() - 1;
    while (top <= bottom && left <= right)
    {
        // left to right print
        for (int i = left; i <= right; i++)
        {
            result.push_back(arr[top][i]);
        }
        top++;
        // top to bottom;
        for (int i = top; i <= bottom; i++)
        {
            result.push_back(arr[i][right]);
        }
        right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                result.push_back(arr[bottom][i]);
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                result.push_back(arr[i][left]);
            }
            left++;
        }
    }

    for (auto s : result)
    {
        cout << s << " ";
    }
}
int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    transpose(arr);
    return 0;
}