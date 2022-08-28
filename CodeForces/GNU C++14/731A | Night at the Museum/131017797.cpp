#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string str;
    int let=0;
    cin>>str;
    int n=0;
 
    for(int i = 0 ; i < str.size();++i){
        int diff=(str[i]-'a')-let;
        0 > diff ? diff *= -1: diff;
        if(diff>26/2){
            n+=26-diff;
        }else{
            n+=diff;
        }
        let=str[i]-'a';
    }
    cout<<n;
}