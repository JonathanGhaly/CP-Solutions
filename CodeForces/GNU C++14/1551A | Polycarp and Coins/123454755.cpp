#include <iostream>
 
using namespace std;
int main() {
    int t,tc=0;
    cin>>t;
    while(tc<t){
        int n,c1,c2,nTemp;
        cin>>n;
        nTemp=n/3;
        c1=nTemp;
        c2=(n-c1)/2;
        while(c2*2+c1<n) c1++;
        ++tc;
        cout<<c1<<" "<<c2<<endl;
    }
}