#include <bits/stdc++.h>
 
using namespace std;
string removeDuplicatesFromString(string str)
{
 
    // keeps track of visited characters
    int counter = 0;
 
    int i = 0;
    int size = str.size();
 
    // gets character value
    int x;
 
    // keeps track of length of resultant string
    int length = 0;
 
    while (i < size) {
        x = str[i] - 97;
 
        // check if Xth bit of counter is unset
        if ((counter & (1 << x)) == 0) {
 
            str[length] = 'a' + x;
 
            // mark current character as visited
            counter = counter | (1 << x);
 
            length++;
        }
        i++;
    }
 
    return str.substr(0, length);
}
int main()
{
    string s1;
    cin>>s1;
    s1=removeDuplicatesFromString(s1);
    if(s1.length()% 2 == 0) cout<<"CHAT WITH HER!\n";
    else cout<<"IGNORE HIM!\n";
}