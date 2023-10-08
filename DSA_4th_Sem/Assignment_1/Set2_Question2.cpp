#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cout << "Enter the value of x: ";
    cin >> x;
    int c = x;
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 5; k >= i; k--)
            cout << " ";
        for (int j = 1; j <= 5; j++)
        {
            if (j <= i)
                cout << x + j << " ";
            else
                cout << " ";
        }
        x *= c;
        cout << endl;
    }
return 0;
}