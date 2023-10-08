#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    int b[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> b[i][j];
        }
    }
    int c[n][n];
    memset(c, 0, sizeof(c));
    int sum = 0;
    int k = 0;
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                c[k][i] = c[k][i] + a[k][j] * b[j][i];
            }
        }
    }
    int d[n][n];
    memset(d, 0, sizeof(d));
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                d[k][i] = d[k][i] + b[k][j] * a[j][i];
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << d[i][j] << " ";
        }
        cout << endl;
    }
    int check = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (c[i][j] != d[i][j])
            {
                check = 0;
                break;
            }
        }
        if (!check)
            break;
    }
    if (!check)
        cout << "Not Commutative" << endl;
    else
        cout << "Yes,they're Commutative" << endl;

    return 0;
}