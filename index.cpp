#include <bits/stdc++.h>
using namespace std;
int sum_array(int A[], int i, int j)
{
    int res = 0;
    for (int k = i; k <= j; k++)
    {
        res += A[k];
    }
    return res;
}
int max_subarry(int A[], int n)
{
    int addup;
    int sum = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            addup = sum_array(A,i,j);
            if(addup > sum)
                sum = addup;
        }
    }
    return sum;
}

int main()
{
    int A[] = {-2, 1, -3, 4, -1, 2, 1, -5, -4};
    int n = sizeof(A) / sizeof(A[0]);
    cout<<max_subarry(A,n);
    return 0;
}