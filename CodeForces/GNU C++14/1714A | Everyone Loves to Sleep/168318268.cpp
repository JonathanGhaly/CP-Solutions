#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,h,m;
        cin>>n>>h>>m;
        int hs[n],ms[n], ind[2]={10000,10000};
        for(int i = 0 ; i < n ; i++){
            cin>>hs[i]>>ms[i];
        }
        for(int i = 0 ; i < n ; i++){
            int temph=0,tempm=0;
            if(hs[i]< h){
                hs[i]+=24;
            }
            if(hs[i]==h && ms[i]<m){
                hs[i]+=24;
            }
            if(ms[i]<m){
                hs[i]--;
                tempm = 60 - abs(ms[i]-m);
            }else{
                tempm=abs(ms[i]-m);
            }
     
            temph = abs(hs[i]-h);
            if(temph<ind[0]){
                ind[0]=temph;
                ind[1]=tempm;
            }else if(temph==ind[0] && tempm<ind[1]){
                ind[0]=temph;
                ind[1]=tempm;
                }        
        }
        cout<<ind[0]<<" "<<ind[1]<<endl;
    }
    
    return 0;
}