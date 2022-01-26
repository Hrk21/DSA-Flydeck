#include <bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<int>> v, int n, int row, int col)
{
    for (int i = row - 1, j = col; i >= 0; i--)
    {
        if (v[i][j] == 1)
        {
            return false;
        }
    }
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (v[i][j] == 1)
        {
            return false;
        }
    }
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
    {
        if (v[i][j] == 1)
        {
            return false;
        }
    }
    return true;
}

void nqueen(vector<vector<int>> v, int n, string ans, int row)
{
    if (row == n)
    {
        cout << ans;
        return;
    }
    for (int col = 0; col < n; col++)
    {
        if (isSafe(v, n, row, col))
        {
            v[row][col] = 1;
            nqueen(v, n, ans + to_string(row) + "-" + to_string(col) + ",", row + 1);
            v[row][col] = 0;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    return 0;
}