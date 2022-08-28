#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,max=0,index,ind2,max2=0,c=0;
    cin>>n;
    vector <int> arr,arr2;
    for(int i = 0; i < n;++i){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    for(int i = 0; i < arr.size();++i) {
        if(arr[i]>max){
            max=arr[i];
            index = i;
        }
    }
    for (int i = 0; i < index; ++i) {
        cout << "\n";
    }
    cout<<max<<" ";
    --max;
    while (max>0) {
        for(int i = 0; i < arr.size();++i) {
            if(arr[i]==max){
                ind2 = i;
                break;
            }
        }
       if(ind2>index){
            for (int i = 0; i <ind2-index; ++i) {
                cout << "\n";
            }
            index=ind2;
        }
        cout<<max<<" ";
        max--;
        --n;
    }
}