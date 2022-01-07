#include<bits/stdc++.h>
using namespace std;
int fac_febo(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    return fac_febo(n-1)+fac_febo(n-2);
}
int main()
{
    cout<<fac_febo(6);
return 0;
}