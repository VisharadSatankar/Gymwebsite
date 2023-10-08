#include <iostream>
using namespace std;
int main() {
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int element ;
    cout<<"Enter the value of element"<<endl;
    cin>>element;
    int freq=0;
    int *frequency=&freq;
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            (*frequency)++;
        }
    }
    cout << "The number " << element << " occurs " << freq << " times in the array." <<endl;
    return 0;
}