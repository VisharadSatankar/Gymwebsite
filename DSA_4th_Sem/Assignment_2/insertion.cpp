#include<bits/stdc++.h>
using namespace std;
int main()
{
        int a[7];
        for(int i = 0; i < 7; i++){
            cin>>a[i];
        }
        for(int i = 1; i < 7; i++){
            int temp = a[i];
            int j = i;
            for(j = i-1; j >=0; j--){
                if(a[j] > temp){
                    a[j+1] = a[j];
                }else {
                    break;
                }
            }
            a[j+1] = temp;
        }
        for(int i = 0; i < 7; i++){
            cout<<a[i];
        }
    return 0;
}