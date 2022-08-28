#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    long long prif1[n+5] , prif2[n+5];
    vector<long long> arr,arr_sorted;
    arr.push_back(0);
    arr_sorted.push_back(0);
    for(int i=0; i<n; ++i)
    {
        int x;
        cin >> x;
        arr.push_back(x);
        arr_sorted.push_back(x);
    }
    sort(arr_sorted.begin(), arr_sorted.end());
    prif1[0]=0;
    prif2[0]=0;
    for(int i=1; i<=n; ++i)
    {
        prif1[i] = prif1[i-1] + arr[i];
        prif2[i] = prif2[i-1] + arr_sorted[i];
    }
    int m, o, l, r;
    cin >> m;
    while(m--)
    {
        cin >> o >> l >> r;
        if(o==1)
        {
            cout<<prif1[r]-prif1[l-1]<<endl;
        } else
        {
            cout<<prif2[r]-prif2[l-1]<<endl;
        }
    }
}