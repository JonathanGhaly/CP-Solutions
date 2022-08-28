#include <iostream>
using namespace std;
 
int main(){
    int n,place,l,r,out=0;
    bool left=false,right=false;
    cin>>n>>place;
    l = r = place-1;
    int c[n];
    for (int i = 0; i < n; i++)
    {
       cin>>c[i];
    }
    while (true)
    {
        if (left && right)
        {
            break;
        }
        else if (!left && !right)
        {
            if (c[l] == c[r] && c[l] == 1 && l!=r)
            {
                out+=2;
            }else if(c[l] == c[r] && c[l] == 1 && l==r) out++;
            l--;
            r++;
            if(l < 0) left=true;
            if(r > n-1) right=true;
        }
        else if(right && !left){
            if(c[l] == 1) out++;
            l--;
            if(l < 0) left=true;
        }else{
            if(c[r]==1) out++;
            r++;
            if (r > n-1) right=true;
        }        
    }
    cout<<out<<endl;
    
    
    return 0;
}