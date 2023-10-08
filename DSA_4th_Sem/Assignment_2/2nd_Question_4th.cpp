#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cout << "Enter the value of n- ";
cin >> n;
int arr[n];
cout << "Enter the elements ";
for (int i = 0; i < n; i++){
cin >> arr[i];
}
int k, j;
cout << "Enter the rows and column for 2D array- " ;
cin >> k >> j;
int twoDarray[k][j];
for (int i = 0; i < k; i++){
    for (int m = 0; m < j; m++){
    twoDarray[i][m] = arr[i * j + m];
    }
}
cout << "2 D array- "<<endl;
for (int i = 0; i < k; i++){
    for (int m = 0; m < j; m++){
    cout << twoDarray[i][m] << " ";
    }
cout << endl;
}
return 0;
}