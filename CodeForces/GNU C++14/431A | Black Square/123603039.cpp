#include <iostream>
 
using namespace std;
 
int main()
{
    int a[4],count = 0,temp;
    string s;
    for (int i = 0; i < 4; ++i)
{
    cin >> a[i];
 
}
    cin>>s;
        for (int i = 0; i < s.length(); ++i)
{
        temp = s[i]-'0';
        count+=a[temp-1];
}
cout<<count<<endl;
}