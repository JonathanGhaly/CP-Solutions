#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int capCoun=0,smalCount=0;
    string s,s2=""  ;
    cin>>s;
    for(int i = 0 ; i < s.length(); ++i){
        if(s[i]<'a'){
            capCoun++;
        }else smalCount++;
    }
    for(int i = 0 ; i < s.length(); ++i){
    if(capCoun<=smalCount){
        s2+=tolower(s[i]);
    }else s2+=toupper(s[i]);
 
    }
    cout<<s2;
}