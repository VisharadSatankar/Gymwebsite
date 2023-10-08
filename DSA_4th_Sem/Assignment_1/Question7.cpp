#include<bits/stdc++.h>
using namespace std;
int main()
{
int n=6;
int number;
cin>>number;
int temp=number;
int reverse_number=0;
int sum =0;
int digit;
while(n>=0){
    digit=temp%10;
    temp=temp/10;
    sum+=digit;
    reverse_number+=digit*(pow(10,n-1));
    digit=0;
    n--;
}
cout<<number<<endl;
cout<<reverse_number<<endl;
cout<<sum<<endl;
return 0;
}