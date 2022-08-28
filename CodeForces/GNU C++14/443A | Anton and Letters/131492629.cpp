#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int c=0;
    string s;
getline(cin,s);
set<char> str;
    set<char> ::iterator itr;
    for (int i = 0 ; i < s.length() ; ++i){
        str.insert(s[i]);
    }
    for (itr = str.begin(); itr != str.end(); itr++)
    {
        if(*itr >= 'a' && *itr<='z'){
            c++;
        }
    }
    cout<<c;
 
}
 