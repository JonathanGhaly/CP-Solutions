#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int size1=0,size2=0;
    string s1,s2,strLow1="",strLow2="";
    cin>>s1>>s2;
    for(int i = 0 ; i < s1.length();++i){
        strLow1+=tolower(s1[i]);
        strLow2+=tolower(s2[i]);
 
    }
    for(int i = 0 ; i < strLow1.length();++i){
        if(strLow1[i]<strLow2[i]) {
            cout<<-1;
            return 0;
        }
        else if(strLow1>strLow2) {
            cout<<1;
            return 0;
        }
 
    }
        cout<<0;
 
}