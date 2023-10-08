#include<bits/stdc++.h>
using namespace std;
int main()
{
int a ,b ;
int temp;
int *add1 , *add2;

cin>>a>>b;
cout<<"Before swapping value of a and b is respectively "<<a<<" "<<b<<endl;

add1=&a;
add2=&b;

// cout<<endl;
temp = *add1;
// cout<<temp;
*add1=*add2;
*add2=temp;

cout<<"After swapping value of a and b are respectively "<<a<<" "<<b<<endl;
return 0;
}