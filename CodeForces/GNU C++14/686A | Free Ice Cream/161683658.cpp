#include <iostream>
 
using namespace std;
 
int main()
{
    long long n,d,x,kids=0;
    char s;
    cin>>n;
    cin>>d;
    for(int i = 0 ; i < n ; i++){
        cin>>s;
        cin>>x;
        if(s=='+'){
            d+=x;
        }else{
            if(d-x >= 0){
                d-=x;
            } else
                kids++;
        }
    }
    cout<<d<<" "<<kids<<endl;
    return 0;
}