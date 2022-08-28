#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int shoe[4],coun=0,temp=0;
    for(int i = 0 ; i < 4 ; i++ ) cin>>shoe[i];
    for(int i = 0 ; i < 4 ; i++ ) {
        for(int j = i+1 ; j < 4 ; j++ ){
            if(shoe[i]==shoe[j] && shoe[i]!=temp){
                coun++;
            }
        }
        temp = shoe[i];
    }
     cout<<coun;
}