#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n,k,i=1;
    cin>>n>>k;
 
    while (true){
        if((n*i)%10==0 ||(n*i)%10==k){
            break;
        }
        else{
            ++i;
        }
    }
    cout<<i;
}