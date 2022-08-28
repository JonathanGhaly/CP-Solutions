#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n,t,x,y,prev,next;
    cin>>n;
    int bird[n];
    for(int i = 0 ; i < n ; ++i){
        cin>>bird[i];
    }
    cin>>t;
    while(t--){
        cin>>x>>y;
        if(x > 1 && x < n){
            prev= y-1;
            next=bird[x-1]-y;
            bird[x-2]+=prev;
            bird[x]+=next;
            bird[x-1]=0;
        }else if(x == 1){
            next = bird[x-1]-y;
            bird[x] += next;
            bird[x-1] = 0;
        } else if (x==n){
            prev= y-1;
            bird[x-2]+=prev;
            bird[x-1]=0;
        }
    }for(int i = 0 ; i < n ; ++i){
        cout<<bird[i]<<endl;
    }
 
}
 