#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;
    if(n==1 && m==10) {
        cout<<-1;
        return 0;
    }
    string x = "";
    x+=to_string(m);
    while(x.length()<n){
        x+='0';
 
    }
    cout<<x;
}