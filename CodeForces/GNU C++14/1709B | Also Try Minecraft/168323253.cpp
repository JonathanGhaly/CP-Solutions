#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
 
int main(){
    long long n,m;
    cin>>n>>m;
    long long world[n],dmg[n],rdmg[n],rworld[n];
    dmg[0]=0;
    rdmg[0]=0;
    long long ind = n-1;
    for(int i = 0 ; i < n ; i++){
        cin>>world[i];
        if(ind>=0){
            rworld[ind--]=world[i];
        }
        if(i>0){
            long long t = world[i-1]-world[i];
            if(t>0){
                dmg[i]=t+dmg[i-1];
            }else{
                dmg[i]=dmg[i-1];
            }
        }
    }
   for (int i = 1; i < n; i++)
   {
            long long t = rworld[i-1]-rworld[i];
            if(t>0){
                rdmg[i]=t+rdmg[i-1];
            }else{
                rdmg[i]=rdmg[i-1];
            }   }
   
    while(m--){
        long long l,r;
        cin>>l>>r;
        long long tdmg=0;
        if(l<r){
            tdmg=dmg[r-1]-dmg[l-1];
        }else{
            tdmg=rdmg[n-r]-rdmg[n-l];
        }
 
        cout<<tdmg<<endl;
    }
    return 0;
}