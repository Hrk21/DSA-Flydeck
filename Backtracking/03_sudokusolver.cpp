#include <bits/stdc++.h>
using namespace std;
#define n 9
bool IsComplete(vector<vector<int>> v)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] == 0)
                return false;
        }
    }
    return true;
}
void display(vector<vector<int>> v)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
bool IsValid(vector<vector<int>> v, int row, int col, int val)
{
    for (int i = 0; i < n; i++)
    {
        if (v[i][col] == val)
            return false;
    }
    for (int j = 0; j < n; j++)
    {
        if (v[row][j] == val)
            return false;
    }
    int new_row = 3 * (row / 3);
    int new_col = 3 * (col / 3);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (val == v[i + new_row][j + new_col])
                return false;
        }
    }
    return true;
}
void sudoku_solver(vector<vector<int>> v, int row, int col)
{
    if (IsComplete(v))
    {
        display(v);
        return;
    }
    if (col == n - 1)
    {
        col = 0;
        row++;
    }
    else
    {
        col++;
    }
    if (v[row][col] != 0)
        sudoku_solver(v, row, col);
    else
    {
        for (int val = 1; val <= n; val++)
        {
            if (IsValid(v, row, col, val))
            {
                v[row][col] = val;
                sudoku_solver(v, row, col);
                v[row][col] = 0;
            }
        }
    }
}
int main()
{
    vector<vector<int>> v =
        {
            {6, 5, 0, 8, 7, 3, 0, 9, 0},
            {0, 0, 3, 2, 5, 0, 0, 0, 8},
            {9, 8, 0, 1, 0, 4, 3, 5, 7},
            {1, 0, 5, 0, 0, 0, 0, 0, 0},
            {4, 0, 0, 0, 0, 0, 0, 0, 2},
            {0, 0, 0, 0, 0, 0, 5, 0, 3},
            {5, 7, 8, 3, 0, 1, 0, 2, 6},
            {2, 0, 0, 0, 4, 8, 9, 0, 0},
            {0, 9, 0, 6, 2, 5, 0, 8, 1}};
    sudoku_solver(v, 0, 0);
    return 0;
}