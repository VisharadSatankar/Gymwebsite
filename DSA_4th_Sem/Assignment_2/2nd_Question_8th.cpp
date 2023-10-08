#include<bits/stdc++.h>
using namespace std;
long long  reversednumber(long long num,long long  & rev){
    int digit;
    if(num==0)return 0;
    digit=num%10;
    rev= rev*10 + digit;
    reversednumber(num/10,rev);
    return rev;

// return( num%10 * 10 + reversednumber(num/10));
}
int main()
{
long long reverse=0;
long long num = INT_MAX;
cout<<num<<endl;
cin>>num;
reversednumber(num,reverse);
cout<<"Reversed Number is "<<reverse;
return 0;
}