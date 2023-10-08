#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0;
    int a = 0;
    int b, c, d = 0;
    int n;
    int largest;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Here is the " << n << "*" << n << " matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Sum of " << i << "th row is ";
        for (int j = 0; j < n; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
        a = max(a, sum);
        sum = 0;
    }
    cout<<a<<endl;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Sum of " << i << "th column is ";
        for (int j = 0; j < n; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << sum << endl;
        b = max(b, sum);
        sum = 0;
    }
    cout << endl;
    cout << "Sum of the element of main diagonal is ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum = sum + arr[i][j];
            }
        }
    }
    c = sum;
    cout << sum << endl;
    int sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += arr[i][n - 1 - i];
    }
    cout << "Sum of the element of secondary diagonal is ";
    cout << sum1 << endl;
    d = sum1;
    cout << endl;
    int first = max(c, d);
    int second = max(b, first);
    largest = max(a, second);
    cout << "the largest sum is " << largest;
}