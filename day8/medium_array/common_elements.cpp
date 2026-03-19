#include <bits/stdc++.h>
using namespace std;
// first
void common_elements(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3)
{
    unordered_map<int, int> hash;
    for (int i = 0; i < arr1.size(); i++)
    {
        hash[arr1[i]]++;
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        hash[arr2[i]]++;
    }
    for (int i = 0; i < arr3.size(); i++)
    {
        hash[arr3[i]]++;
    }
    for (auto &it : hash)
    {
        if (it.second >= 3)
        {
            cout << it.first << endl;
        }
    }
}
// second method;
void common_elements2(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3)
{
    int i, j, k;
    i = j = k = 0;
    set<int> ans;
    while (i < arr1.size() && j < arr2.size() && k < arr3.size())
    {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            ans.insert(arr1[i]);
            i++;
            j++;
            k++;
        }
        else
        {
            if (arr1[i] <= arr2[j] && arr1[i] <= arr3[k])
                i++;
            else if (arr2[j] <= arr1[i] && arr2[j] <= arr3[k])
                j++;
            else
                k++;
        }
    }
    for (auto it : ans)
    {
        cout << it << ",";
    }
    cout << endl;
}
int main()
{
    int n1;
    cout << "enter the size of the array:";
    cin >> n1;
    cout << "Enter the first array:" << endl;
    vector<int> arr1(n1);
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    int n2;
    cout << "enter the size of the array:";
    cin >> n2;
    cout << "Enter the second array:" << endl;
    vector<int> arr2(n2);
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    int n3;
    cout << "enter the size of the array:";
    cin >> n3;
    cout << "Enter the third array:" << endl;
    vector<int> arr3(n3);
    for (int i = 0; i < n3; i++)
    {
        cin >> arr3[i];
    }
    // common_elements(arr1,arr2,arr3);
    common_elements2(arr1, arr2, arr3);
    return 0;
}