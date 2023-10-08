#include<bits/stdc++.h>
using namespace std;
long factorial(int n){
    if(n<=1)return 1;
    return n*factorial(n-1);
}
int main()
{
int n,x;
cin>>n>>x;
float sum=x;
int check=1;
for(int i=3;i<n;i=i+2){
    // cout<<factorial(i+1)<<endl;
    float term=(pow(x,i)/factorial(i-1));
    if(check%2==1){
    sum+=term;
    }
    else
    sum-=term;
    check++;
}
cout<<sum;
return 0;
}