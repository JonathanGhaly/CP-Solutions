#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string s;
    cin>>s;
    vector<int>num;
    for(int i = 0 ; i < s.size();++i){
        if(s[i]>='0' && s[i]<='9'){
            num.push_back(s[i]-'0');
        }
    }
    sort(num.begin(),num.end());
    for(int i = 0 ; i < s.size();++i){
        if(i%2!=0){
            cout<<"+";
        }
        else{
            cout<<num[0];
            num.erase(num.begin(),num.begin()+1);
 
        }
    }
}
 