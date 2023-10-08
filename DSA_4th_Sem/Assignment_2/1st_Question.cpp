#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[50];
    int freq[11]={0};
    for(int i=0;i<50;i++){
        cin>>arr[i];
    }
    for(int i=0;i<50;i++){
        freq[arr[i]]++;
    }
    for(int i=1;i<11;i++){
    cout<< "Frequency of "<< (i%10 == 0?"":"0")<<i << " is" <<" - " <<freq[i]<<endl;
    }
    return 0;
}