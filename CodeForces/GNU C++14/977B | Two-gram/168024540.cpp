#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
 
int main(){
    map<string, int>subst;
    string s,out;
    int n;
    cin>>n>>s;
    for(int i = 0 ; i < n-1 ; i++){
        string t="";
        t+= s[i];
        t+=s[i+1];
        if(subst.find(t)!=subst.end()){
            subst[t]+=1;
        }else{
            subst[t]=1;
        }
    }
    int c = 0;
    for(auto element:subst){
        if(element.second>c){
            out=element.first;
            c=element.second;
        }
    }
    cout<<out;
    return 0;
}