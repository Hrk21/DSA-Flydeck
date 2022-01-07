#include <stdio.h>
void Print_arr(int A[], int n)
{
    if (n == 1)
    {
        printf("%d", A[0]);
        return;
    }
    Print_arr(A, n - 1);
    printf("\t%d", A[n-1]);
}

int main()
{
    int A[] = {2, 3, 1, 4, 5};
    int n = sizeof(A) / sizeof(A[0]);
    Print_arr(A, n);
    return 0;
}