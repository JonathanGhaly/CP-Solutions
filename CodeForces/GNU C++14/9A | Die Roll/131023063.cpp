#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n,s,diff,x,y,bol=0;
    cin>>n>>s;
    diff=7-max(n,s);
    for(int i = 2 ; i <= diff; ++i ){
        if(diff%i==0&&6%i==0){
            x=diff/i;
            y=6/i;
            bol=1;
        }
    }
    if(bol)
    cout<<x<<"/"<<y;
    else
        cout<<diff<<"/"<<6;
}