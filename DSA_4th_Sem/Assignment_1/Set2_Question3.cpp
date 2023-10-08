#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int j=1;
        while(j<=2*n-1){
            if((1<=j && j<=n-i) || (n+i-1<j && j<=2*n-1)){
                cout<<" ";
                j++;
            }
            else if(n-i<j && j<=n){
                cout<<n-j;
                j++;
            }   
            else if(n<j && j<=n+i-1){
                cout<<j-n;
                j++;
            }
        }
        cout<<endl;
    }
    return 0;
}