#include <bits/stdc++.h>
 
using namespace std;
char top[]={'q','w','e','r','t','y','u','i','o','p'},mid[]={'a','s','d','f','g','h','j','k','l',';'},bot[]={'z','x','c','v','b','n','m',',','.','/'};
 
int main() {
    char c;
    cin>>c;
    string s;
    cin>>s;
    if(c=='R'){
        for(int i = 0 ; i < s.size();++i){
            for(int j = 0 ; j < 10 ; ++j){
                if(s[i]==top[j]){
                    s[i]=top[j-1];
                    break;
                }if(s[i]==mid[j]){
                    s[i]=mid[j-1];
                    break;
                }
                if(s[i]==bot[j]){
                    s[i]=bot[j-1];
                    break;
                }
            }
        }
    }
    else{
        for(int i = 0 ; i < s.size();++i){
            for(int j = 0 ; j < 10 ; ++j){
                if(s[i]==top[j]){
                    s[i]=top[j+1];
                    break;
                }if(s[i]==mid[j]){
                    s[i]=mid[j+1];
                    break;
                }
                if(s[i]==bot[j]){
                    s[i]=bot[j+1];
                    break;
                }
            }
        }
    }
    cout<<s;
 
}
 