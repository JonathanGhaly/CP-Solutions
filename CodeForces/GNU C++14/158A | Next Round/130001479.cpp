#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,k,count=0;
    cin>>n>>k;
    int degree[n];
    for(int i = 0 ; i < n ; ++i) {
        cin>>degree[i];
    }
    for(int i = 0 ; i < n ; ++i) {
        if(degree[i]>=degree[k-1] && degree[i]>0) count++;
    }
    cout<<count<<endl;
}