#include <iostream>
 
using namespace std;
 
int main()
{
    long long a,b,c,maxim=0;
    cin>>a>>b>>c;
    if(b>=a){
    while (a>0){
            maxim+=2;
            a--;
            b--;
 
    }
    maxim+=(c*2);
    if(b>0){
        maxim++;
    }}
        if(a>b){
    while (b>0){
            maxim+=2;
            a--;
            b--;
 
    }
    maxim+=(c*2);
    if(a>0){
        maxim++;
    }}
    cout<<maxim;
}