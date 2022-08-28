#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,c=0;
    cin>>n;
    vector <int> arr;
    for(int i = 0 ; i < n ; ++i)
     {
         int x;
         cin>>x;
         arr.push_back(x);
     }
     sort(arr.begin(),arr.end());
    for(int i = 0 ; i < n ; ++i){
        if(arr[i]==arr[0] || arr[i]==arr[n-1]) ++c;
 
    }
    
    cout<<n-c;
}