#include<bits/stdc++.h>
using namespace std;
void roots(int a , int b ,int c){
    double *add1,*add2;
    double discriminant = (b*b - 4 * a *c);
    // cout<<discriminant;
        if((discriminant)<0){
        cout<<"Complex roots exists for given quadractic equation"<<endl;
        return ;
    }
    double root1 = (-b + sqrt(discriminant) ) /2*a;
    double root2 = (-b - sqrt(discriminant) ) /2*a;
    // cout<<root1 << " "<<root2;
    add1=&root1;
    add2=&root2;
    cout<<"Roots of quadratic equations are "<< *add1 << " " <<*add2<<endl;

}
int main()
{
int a , b , c;
cin>>a>>b>>c;
roots(a,b,c);
return 0;
}