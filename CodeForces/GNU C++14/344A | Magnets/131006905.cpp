#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n,c=0;
    cin>>n;
    string curr,prev;
    while (n){
        cin>>curr;
        if(curr!=prev){
            ++c;
        }
        prev=curr;
        --n;
    }
    cout<<c;
}