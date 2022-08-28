#include <iostream>
#include <cstdlib>
using namespace std;
 
int main()
{
    int n,k;
    int j=0;
    string newpass;
    cin>>n>>k;
    for (int i=0;i<n;i++){
        if(j<k){
        newpass+= 'a' + i;
        j++;
    }
 
    }
    for (int i=0;i<n-k;i++){
        newpass+= newpass[i];
    }
    cout<< newpass<<endl;
}