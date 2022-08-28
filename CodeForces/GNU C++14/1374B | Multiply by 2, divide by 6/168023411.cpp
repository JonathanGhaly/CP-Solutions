#include <iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    while(n--){
        long long x,c=0;
        cin>>x;
        while (x>1)
        {
            /* code */
            if(x%6>0){
                if(x%6==2){
                    cout<<-1<<endl;
                    break;
                }else{
                    x*=2;
                    c++;
                }
            }else{
                x/=6;
                c++;
            }
        }
        if(x==1){
            cout<<c<<endl;
        }
    }
}