#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main(){
    int n,m,cost=0;
    cin>>n>>m;
    vector<int>tv;
    for(int i = 0 ; i < n ; i++){
        int x;
        cin>>x;
        tv.push_back(x);
    }
    sort(tv.begin(),tv.end());
    for(int i = 0 ; i < m ; i++){
        if(tv[i]>0) break;
        cost+=(tv[i]*-1);
    }
    cout<<cost<<endl;
    return 0;
}