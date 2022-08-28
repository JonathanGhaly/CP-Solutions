#include <iostream>
using namespace std;
int main() {
    int n,a=0,d=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A'){
            a++;
        }
        if(s[i]=='D'){
            d++;
        }
    }
    if(d>a){
        cout<<"Danik"<<endl;
    }
    else if(a>d){
        cout<<"Anton"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
}