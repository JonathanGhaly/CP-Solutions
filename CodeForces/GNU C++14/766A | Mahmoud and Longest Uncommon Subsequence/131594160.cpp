#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string s,s1;
    int c=0,temp;
    cin>>s>>s1;
    if(s1==s) {
        cout<<-1;
        return 0;
    }
    else if(s1.size() > s.size()){
        cout<<s1.size();
    }else cout<<s.size();
}
 