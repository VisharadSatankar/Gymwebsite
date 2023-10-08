#include<bits/stdc++.h>
using namespace std;
int main()
{
string operation;
for(int i=0;i<4;i++){
cin>>operation;
int A,B;
cin>>A>>B;
if(operation=="Addition")
cout<< A<< "+"<< B<< "="<< A+B<<endl; 
if(operation=="Subtraction")
cout<< A <<"-" <<B<<"="<< A-B<<endl; 
if(operation=="Multiplication")
cout<< A <<"*"<< B<<"="<< A*B<<endl;
 if(operation=="Division")
cout<< A<<"/"  <<B<<"="<< A/B<<endl; 
}
return 0;
}