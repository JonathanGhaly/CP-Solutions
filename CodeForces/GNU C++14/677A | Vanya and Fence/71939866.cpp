#include <iostream>
 
using namespace std;
 
int main()
{
    int n,h,width=0;
    int *a=new int [n];
    cin>>n>>h;
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>h){
            width+=2;
        }
       else if(a[i]<=h){
        width++;
       }
    }
    cout<<width<<endl;
}