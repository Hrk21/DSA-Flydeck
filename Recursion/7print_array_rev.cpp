#include <bits/stdc++.h>
using namespace std;
void rev_print(int A[], int n)
{

    if (n == 1)
    {
        printf("%d", A[0]);
        return;
    }
    printf("\t%d", A[n - 1]);
    rev_print(A, n - 1);
}
int main()
{
    int A[] = {2, 3, 1, 4, 5};
    int n = sizeof(A) / sizeof(A[0]);
    rev_print(A, n);
    return 0;
}