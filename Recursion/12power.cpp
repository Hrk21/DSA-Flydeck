#include <bits/stdc++.h>
using namespace std;
int rec_power(int a,int b)
{
    if(b == 0)
        return 1;
    return a*rec_power(a,b-1);
}
int power_best(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    if(b%2 == 0)
        return rec_power(a,b/2) * rec_power(a,b/2);
    
    else
        return a*rec_power(a,b/2) * rec_power(a,b/2);
    
}
int main()
{
    cout<<rec_power(2,3);
    cout<<power_best(2,3);
    return 0;
}