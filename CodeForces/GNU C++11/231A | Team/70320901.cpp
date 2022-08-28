#include <iostream>
 
using namespace std;
 
int main()
{
    int i ,coun ,n , x, y, z;
    coun=0;
    cin>>n;
    for(i=1; i<=n; i++){
        cin>>x>>y>>z;
        if(x==1 && y==1 || x==1 && z==1 || y==1 && z==1)
            coun+=1;
    }
    cout<<coun<<endl;
}