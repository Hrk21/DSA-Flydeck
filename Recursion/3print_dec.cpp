#include <bits/stdc++.h>
using namespace std;
void printdec(int n)
{
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    cout << n << endl;
    printdec(n - 1);
}
int main()
{
    printdec(6);
    return 0;
}