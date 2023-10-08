#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n ;
cin>>n;
vector<vector<int>> arr(n,vector<int>(n,-1));
for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        if(i+j==n-1){
            arr[i][j]=00;
        }
    }
}
for(int i = 0; i < n; i++){
    for(int j = 0; j < n-1-i; j++){
            arr[i][j]=01;
    }
}
for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        if(arr[i][j]>=0){
            cout<<" "<<arr[i][j]<<" ";
        }
        else
        cout<<arr[i][j] << " ";
        }
        cout<<endl;
    }
return 0;
}