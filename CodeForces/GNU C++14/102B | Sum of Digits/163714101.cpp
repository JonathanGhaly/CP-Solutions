#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s, temp;
    cin >> s;
    int ret=0;
    if(s.size()<2)
    {
        cout << 0;
        return 0;
    }
    while(s.length()>1){
        int sum=0;
        for(char i: s)
        {
            sum+=i - '0';
        }
        ret++;
        s=to_string(sum);
    }
    cout<<ret;
}