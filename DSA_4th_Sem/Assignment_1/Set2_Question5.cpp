#include<bits/stdc++.h>
using namespace std;
long fact(long n){
    if(n<=1)return 1;
    return n*fact(n-1);
}

int fib(int n){
    if (n == 0||n==1)return n;
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    cin>>n;
    int x = fib(n);
    cout<<"Fibonacci of n = "<<x<<endl;
    cout<<"Factorial of " <<x<<" = "<< fact(x);
return 0;
}