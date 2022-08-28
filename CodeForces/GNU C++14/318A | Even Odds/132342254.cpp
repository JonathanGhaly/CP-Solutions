#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main() {
    ll n,p,x=1;
    cin>>n>>p;
    if((p<=(n/2) && n%2==0) || (p<=(n/2)+1 && n%2!=0)){
        x=2*p-1;
 
    }
    else{
        if(n%2!=0)
        p=p-(n/2+1);
        else p=p-n/2;
        x=2*p;
    }
   // x-=2;
    x==0?x+=2:x;
    cout<<x<<endl;
}
 