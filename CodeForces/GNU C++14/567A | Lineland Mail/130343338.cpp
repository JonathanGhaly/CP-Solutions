#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    vector <long long> arr;
    for(int i = 0 ; i < n ; i++) {
            long long x;
            cin>>x;
            arr.push_back(x);
            }
    cout<<(arr[0]-arr[1])*-1<<" "<< arr[n-1]-arr[0]<<endl;
    for(int i = 1 ; i < n-1 ; i++){
            if(arr[n-1]-arr[i]>=arr[i]-arr[0]){
                if(arr[i]-arr[i-1]<arr[i+1]-arr[i]) cout<<arr[i]-arr[i-1]<<" "<<arr[n-1]-arr[i]<<endl;
                else cout<<arr[i+1]-arr[i]<<" "<<arr[n-1]-arr[i]<<endl;
            }
            else {
                 if(arr[i]-arr[i-1]<arr[i+1]-arr[i]) cout<<arr[i]-arr[i-1]<<" "<<arr[i]-arr[0]<<endl;
                else cout<<arr[i+1]-arr[i]<<" "<<arr[i]-arr[0]<<endl;
            }
 
 
    }
        cout<<(arr[n-1]-arr[n-2])<<" "<< arr[n-1]-arr[0]<<endl;
 
}