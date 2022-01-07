#include <bits/stdc++.h>
using namespace std;
int rec_max(int A[],int n)
{
    if(n == 1)
    {
        return A[0];
    }
    int ans1 = A[n-1];
    int ans2 = rec_max(A,n-1);
    return max(ans1,ans2);

}
int main()
{
    int A[] = {2,7,3,23,5,9};
    int n = sizeof(A)/sizeof(A[0]);
    cout<<rec_max(A,n);

    return 0;
}