#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n,police=0,unt=0;
    bool c=true;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; ++i) cin>>arr[i];
    for(int i = 0 ; i < n ; ++i) {
        if(arr[i]>0){
            police+=arr[i];
        }else{
            if(police<=0){
                unt ++;
            }else{
                police--;
            }
        }
    }
    cout<<unt;
}