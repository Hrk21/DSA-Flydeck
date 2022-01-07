#include <bits/stdc++.h>
using namespace std;
int first_index(int A[], int n, int index, int key)
{
    if (index == n)
        return -1;
    if (A[index] == key)
        return index;
    return first_index(A, n, index + 1, key);
}
int main()
{
    int B[] = {2, 3, 4, 1, 5, 7, 1, 3, 5, 7};
    int n = sizeof(B) / sizeof(B[0]);
    cout << first_index(B,n,0,1);
    return 0;
}