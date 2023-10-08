#include<bits/stdc++.h>
using namespace std;
int main()
{
int a=123452,b=157252,c=890979;
// cin>>a>>b>>c;
vector<int> arr1;
vector<int>arr2;
vector<int>arr3;
int temp1=a;
int temp2=b;
int temp3=c;
int n=6;
while(n--){
        int digit1= temp1%10;
        temp1/=10;
        // cout<<digit1<< " " << temp1<<endl;
        arr1.push_back(digit1);
        // cout<<arr1[0]<<" ";
        digit1=0;
        // cout<<arr1[0];

    int digit2= temp2%10;
        temp2/=10;
        arr2.push_back(digit2);
        digit2=0;
        // cout<<arr2[0];

    int digit3= temp3%10;
        temp3/=10;
        arr3.push_back(digit3);
        digit3=0;
        // cout<<arr3[0];
}
sort(arr1.begin(),arr1.end());
reverse(arr1.begin(),arr1.end());
sort(arr2.begin(),arr2.end());
reverse(arr2.begin(),arr2.end());
sort(arr3.begin(),arr3.end());
reverse(arr3.begin(),arr3.end());
// cout<<arr1[0]<<" ";
int max1=0;
int max2=0;
int max3=0;
for(int i=0;i<6;i++){
    max1+=(arr1[i]*pow(10,5-i));
    max2+=(arr2[i]*pow(10,5-i));
    max3+=(arr3[i]*pow(10,5-i));
}
// cout<<max1<<" "<<endl;
int maximum=max(max1,max(max2,max3));
cout<< maximum <<endl;
cout<<max1<<endl;
cout<<max2<<endl;
cout<<max3<<endl;


return 0;
}