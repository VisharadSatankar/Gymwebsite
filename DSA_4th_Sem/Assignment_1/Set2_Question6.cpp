#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
int count_vowels=0;
int count_nonAplha=0;
bool check=0;
char first_vowel;
for(int i=0;i<s.size();i++){
    if(s[i]=='a' || s[i]== 'e' || s[i] == 'i' || s[i] =='o'|| s[i]=='u'){
        count_vowels++;
        if(!check){
           first_vowel = s[i];
           check=1;
        }
    }
    else if((s[i]<'a' && s[i]>'Z') ||(s[i] < 'A') ){
        count_nonAplha++;
    }
}
cout<<"first Vowel = "<<first_vowel<<endl;
cout<< "Vowel count = "<< count_vowels<<endl;
cout<<"Non AplhaBetic = "<<count_nonAplha<<endl;
return 0;
}