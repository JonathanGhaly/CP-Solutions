#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n,b,d,y=0,c=0;
    cin>>n>>b>>d;
    int oran[n];
    for(int i = 0 ; i < n ; ++i){
        cin>>oran[i];
    }
    for(int i = 0 ; i < n ; ++i){
        if(oran[i]<=b){
            y+=oran[i];
            if(y>d){
                y=0;
                ++c;
            }
        }
    }
    cout<<c;
}
 