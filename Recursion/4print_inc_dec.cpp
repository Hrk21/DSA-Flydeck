#include <bits/stdc++.h>
using namespace std;
void printincdec(int n)
{
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    cout << n << endl;
    printincdec(n - 1);
    cout << n << endl;
}
int main()
{
    printincdec(4);
    return 0;
}