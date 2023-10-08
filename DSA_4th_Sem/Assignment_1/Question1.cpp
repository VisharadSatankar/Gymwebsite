#include<bits/stdc++.h>
using namespace std;
int main(){
    string vegetables [5]={"Tomatoes  ","Ladyfinger","Paneer    ","Capsicum  ","Coriander "};
    double price [5];
    int Quantity [5];
    
    for(int i = 0;i < 5; i++){
        cin>>Quantity[i];
        price [i] = (2*3.14 )*(i+1);
    }
    int sum = 0;
    cout<<"                      MY SHOP           "<<endl;
    cout<<"--------------------------------------------------------------"<<endl;
    cout<<"Item"<<"       Name     Quantity "<<"  Price       Total price   "<<endl;
    cout<<"--------------------------------------------------------------"<<endl;
    for(int i = 0;i < 5; i++){
        cout<<setw(3);
        cout<<(i+1);
        cout<<setw(5)<<" ";
        cout<<vegetables[i];
        cout<<setw(5)<<" ";
        cout<<Quantity[i];
        cout<<setw(8)<<" ";
        cout<<price[i];
        cout<<setw(10)<<" ";
        cout<<Quantity[i]*price[i]<<endl;
        sum +=Quantity[i]*price[i];
    }
    cout<<"---------------------------------------------------------------"<<endl;
    cout<<setw(39)<<"Total :: "<<setw(10)<<sum;
    
}