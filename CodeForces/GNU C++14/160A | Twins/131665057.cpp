#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n,sum=0;
    cin>>n;
    vector<int>coin;
    for (int i = 0 ; i < n ; i++){
        int x ;
        cin>>x;
        sum+=x;
        coin.push_back(x);
    }
    sort(coin.begin(),coin.end());
    int sum1=0,c=0;
    for(int i = n-1 ; i >= 0 ;--i){
        if(sum1>sum/2) break;
        c++;
        sum1+=coin[i];
    }
    cout<<c;
}
 