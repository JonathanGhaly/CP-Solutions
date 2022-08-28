#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,l=0,i=0;
    cin>>n;
 
    while(i<=n){
        l++;
        i+=(l*(l+1)/2);
    }
    cout<<l-1;
 
}