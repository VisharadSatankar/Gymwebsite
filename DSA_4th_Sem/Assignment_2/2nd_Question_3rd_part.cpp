#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> generatePascalsTriangle(int n)
{
    vector<vector<int>> triangle(n);
    for (int i = 0; i < n; i++)
    {
        triangle[i].resize(i + 1);
        triangle[i][0] = triangle[i][i] = 1;
        for (int j = 1; j < i; j++)
        {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i -1][j];
        }
    }
    return triangle;
}
int main()
{
    int n;
    cout << " Enter the number of rows for Pascal's triangle: ";
    cin >> n;
    vector<vector<int>> pascalsTriangle = generatePascalsTriangle(n);
    cout << " Pascal's Triangle: " << endl;
    for (const auto &row : pascalsTriangle)
    {
        for (int num : row)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}