#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string s,t;
    int pos=1,x=0;
    cin>>s>>t;
    for(int i = 0 ; i < t.length() ; i++){
        if(t[i]==s[x]){
            pos++;
            x++;
        }
    }
    cout<<pos;
}