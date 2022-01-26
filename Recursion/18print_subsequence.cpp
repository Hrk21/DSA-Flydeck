#include <bits/stdc++.h>
using namespace std;
void print_subseq(string s,string ans)
{
    if(s.size() == 0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string rem = s.substr(1);
    print_subseq(rem, ans);
    print_subseq(rem, ans + ch);
}
int main()
{
    string s;
    cin>>s;
    print_subseq(s,"");
    return 0;
}