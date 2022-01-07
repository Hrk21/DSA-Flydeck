#include <bits/stdc++.h>
using namespace std;
int last_index(int A[], int n, int index, int key)
{
    if (index == n)
        return -1;
    if (A[index] == key)
        return index;
    return last_index(A, n, index - 1, key);
}
int main()
{
    int B[] = {2, 3, 4, 1, 5, 7, 1, 3, 5, 7};
    int n = sizeof(B) / sizeof(B[0]);
    cout << last_index(B,n,n-1,3);
    return 0;
}