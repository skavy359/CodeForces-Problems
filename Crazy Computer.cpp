#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c;
    cin >> n >> c;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - arr[i - 1] <= c)
        {
            count++;
        }
        else
        {
            count = 1;
        }
    }
    cout << count << endl;
    return 0;
}