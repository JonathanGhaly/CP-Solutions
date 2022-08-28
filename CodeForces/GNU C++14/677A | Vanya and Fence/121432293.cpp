#include <iostream>
 
using namespace std;
int main() {
    int h,n,p=0;
    cin>>n>>h;
    int a[n];
    for(int i = 0 ; i < n ; i++)    cin>>a[i];
    for(int i = 0 ; i < n ; i++){
        if(a[i] <= h) p++;
        else p+=2;
    }
    cout<<p<<endl;
}