#include<bits/stdc++.h>
using namespace std;
int main()
{
int a , b ,c;
int *add1 , *add2 , *add3;
cin>>a>>b>>c;
add1 = &a;
add2 = &b;
add3 = &c;
int largest = max(*add1,max(*add2,*add3));
cout<<largest;
return 0;
}