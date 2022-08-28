#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n,di=0,ser=0,i;
    bool c=true;
    cin>>n;
    i=n;
    vector<int> arr;
    while (i){
        int x;
        cin>>x;
        arr.push_back(x);
        --i;
    }
 
    while (!arr.empty()){
        if(c){
            ser+=max(arr[0],arr[arr.size()-1]);
            arr.erase(remove(arr.begin(), arr.end(), max(arr[0],arr[arr.size()-1])), arr.end());
            c=false;
        }else{
            di+=max(arr[0],arr[arr.size()-1]);
            arr.erase(remove(arr.begin(), arr.end(), max(arr[0],arr[arr.size()-1])), arr.end());
            c=true;
        }
    }
    cout<<ser<<" "<<di;
}