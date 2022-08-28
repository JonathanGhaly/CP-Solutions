#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void sortString(string &str)
{
   sort(str.begin(), str.end());
}
int main()
{
    char x='a';
    string s;
    int n,i,coun=0;
    cin>>n;
    cin>>s;
    if(n<26){
        cout<<"NO"<<endl;
    }
    else{
 
        for(i=0;i<s.size();i++){
        s[i]=tolower(s[i]);}
                sortString(s);
 
 
        for(i=0;i<s.size();i++){
            if(s[i]!=s[i+1]){
                    if(s[i]==x){
                        x++;
                        coun++;
 
                    }
 
 
            }}
            if(coun>=26){
                cout<<"YES"<<endl;
            }
            else{
            cout<<"NO"<<endl;
    }
 
 
 
    }
}