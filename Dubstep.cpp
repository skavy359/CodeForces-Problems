#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string ans = "";
    bool check = true;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 2;
            if (!check)
            {
                ans += " ";
                check = true;
            }
        }
        else
        {
            check = false;
            ans += s[i];
        }
    }
    cout << ans << endl;
    return 0;
}