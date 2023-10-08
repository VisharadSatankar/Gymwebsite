#include<bits/stdc++.h>
using namespace std;
int main()
{
cout<< setw(40)<< "August 2014"<<endl;
cout<<"---------------------------------------------------------------------------------------------"<<endl;

cout<<"SUN "<< setw(15) <<"MON "<<setw(15)<< "TUE "<<setw(15)<<"WED "<< setw(15)<<"THUR " <<setw(15)<<"FRI "<< setw(15)<<"SAT "<<endl;
cout<<"---------------------------------------------------------------------------------------------"<<endl;
int newweek = 6;
for(int i=0;i<5;i++){
    cout<<" "<<setw(15);
}
for(int i=1;i<=31;i++){
    if(newweek%7==0)cout<<i<<endl; 
    else{
        cout<<i<<setw(15);
    }
    newweek++;
}
return 0;
}