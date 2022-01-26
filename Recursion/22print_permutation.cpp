#include <bits/stdc++.h>
using namespace std;
void print_permuation(string s, string ans)
{
    if (ans.size() == 0)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        string rem = s.substr(0, i) + s.substr(i + 1);
        print_permuation(rem, ans + ch);
    }
    int main()
    {
        string s;
        cin >> s;
        print_permuation(s, "");
        return 0;
    }