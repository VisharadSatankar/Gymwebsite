#include<bits/stdc++.h>
using namespace std;
int main()
{
    // For small case letters
cout<<"Given set "<<endl;
char arr[50];
for(int i = 0; i < 50; i++){
    cin>>arr[i];
}

for(int i = 0; i < 49; i++){
    for(int j = 0; j < 49-i; j++){
        if(int(arr[j])>int(arr[j+1]))
        swap(arr[j],arr[j+1]);
    }
}
cout<<"Sorted set "<<endl;
for(int i = 0; i < 50; i++){
    cout<<arr[i]<< " ";
}
return 0;
}