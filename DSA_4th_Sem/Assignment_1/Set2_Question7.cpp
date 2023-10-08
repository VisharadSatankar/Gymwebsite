#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
string ans;
for(int i=0;i<s.size();i++){
    if(s[i]!=s[i+1]){
        ans=ans+s[i];
    }
   
//  cout<<ans<<endl;
}
cout<<" Original string = "<<s<<endl;
cout<<" Updated string = "<<ans<<endl;
cout<< " Previous size of string =" <<s.size()<<endl;
cout<<" Updated size of string  ="<<ans.size()<<endl;

return 0;
}