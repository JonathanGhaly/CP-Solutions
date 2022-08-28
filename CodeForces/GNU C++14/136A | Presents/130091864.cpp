#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int arr[n],arr2[n];
    for(int i = 0 ; i < n ; i++) cin>>arr[i];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; ++j){
            if(i+1==arr[j])
            arr2[i]=j+1;
        }
    }
     for(int i = 0 ; i < n ; i++) cout<<arr2[i]<<" ";
}