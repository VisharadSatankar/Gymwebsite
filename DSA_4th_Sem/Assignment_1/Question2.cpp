#include<bits/stdc++.h>
using namespace std;
int main()
{
int marks;
for(int i=0;i<7;i++){
cin>>marks;
switch(marks/10){
case 9 :
cout<<"congratulations your grade is S"<<endl;
break;
case 8 :
cout<<"congratulations your grade is A"<<endl;
break;
 case 7 :
cout<<"congratulations your grade is B"<<endl;
break;
 case 6 :
cout<<"congratulations your grade is C"<<endl;
break;
case 5 :
cout<<"congratulations your grade is D"<<endl;
break;
 case 4 :
cout<<"congratulations your grade is E"<<endl;
break;
case 3 :
cout<<"congratulations your grade is F"<<endl;
break;

}
}
return 0;
}