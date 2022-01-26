#include <bits/stdc++.h>
using namespace std;
vector<string> get_subseq(string s)
{
    if(s.size() == 0)
    {
        vector<string> base;
        base.push_back("");
        return base;
    }
    char ch = s[0];
    string rest = s.substr(1); 
    vector<string> half = get_subseq(rest);
    vector<string> ans;
    for(int i=0; half.size()>i; i++)
    {
        string add = ch + half[i];
        ans.push_back(add);
        ans.push_back(half[i]);
    }
    return ans;
}
int main()
{
    string s;
    cin>>s;
    vector<string> v = get_subseq(s);
    for(int j = 0 ; j<v.size();j++)
    {
        cout<<v[j]<<endl;
    }
    return 0;
}