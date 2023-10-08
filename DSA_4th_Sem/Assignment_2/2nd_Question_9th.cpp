#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
cout<<"Prime numbers less than " << n <<" are"<<endl;
for( int i = 2; i <= n; i++){
bool check = true;
    for(int j=2;j<=i/2;j++){
        if(i%j==0){
            check=false;
        }
    }
    
    if(check)cout<<i<<endl;
}
return 0;
}