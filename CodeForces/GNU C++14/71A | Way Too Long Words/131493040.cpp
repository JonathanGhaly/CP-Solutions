#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string s;
    int c=0,t;
    cin>>t;
    while (t--){
    cin>>s;
    if(s.size()>10){
        c=s.size()-2;
        cout<<s[0]<<c<<s[s.size()-1];
    }
 
 else
    cout<<s;
        cout<<"\n";
 
    }
}
 