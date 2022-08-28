#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, count = 0,temp = 0;
    cin>>n;
    vector <int> a;
    for(int i = 0 ; i < n ; ++i){
        cin>>temp;
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
 
    for(int i = 0 ; i < n ; ++i)
        cout << a[i] << " ";
}