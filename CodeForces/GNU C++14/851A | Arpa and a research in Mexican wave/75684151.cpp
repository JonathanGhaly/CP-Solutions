#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   long long n , k , t , s;
    cin>>n>>k>>t;
     if(t<k){
        cout<<t<<endl;
    } else if(t>=k && t<n){
        cout<<k<<endl;
    } else if(t>n){
        s=t-n;
        cout<<k-s<<endl;
    }else if(t==k && t==n){
         cout<<k<<endl;
     }
     else if(t==n){
         cout<<k<<endl;
     }
 
}