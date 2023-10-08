#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[50];
for(int i = 0; i < 50; i++){
    cin>>arr[i];
}
for(int i = 0; i < 49; i++){
    for(int j = 0; j < 49-i; j++){
        if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);
    }
}
for(int i = 0; i < 50; i++){
    cout<<arr[i]<< " ";
}
return 0;
}