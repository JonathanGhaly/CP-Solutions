#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    set<int>x;
    int n;
    int a;
    int w;
    cin>>n;
    cin>>w;
    for(int i=0; i<w; ++i)
    {
        cin>>a;
        x.insert(a);
    }
    cin>>w;
    for(int i=0; i<w; ++i)
    {
        cin>>a;
        x.insert(a);
    }
 
    if(x.size()==n) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
}