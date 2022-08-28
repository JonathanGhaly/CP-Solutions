#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int max=0, n, energy=0;
    cin >> n;
    vector<int>h(n,0),c(n,1);
    for(int i=0; i<n; ++i)
    {
        cin>>h[i];
    }
    int i = 1,lt=n-1,rt=0;
    while(h[i]<=h[rt] && i < n){
        c[0]++;
        i++;
        rt++;
    }
    i = n-2;
    while(h[i]<=h[lt] && i>=0){
        c[n-1]++;
        i--;
        lt--;
    }
    for(int j=1; j<n-1; ++j)
    {
        int left = j-1,right=j+1,l=j,r=j;
        while(left>=0 && h[left]<=h[l]){
            c[j]++;
            left--;
            l--;
 
        }
        while(right<n && h[right]<=h[r]){
            c[j]++;
            r++;
            right++;
        }
    }
    for(int cy:c)
    {
        max=std::max(cy,max);
    }
    cout<<max;
}