#include <iostream>
 
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    int counter=0 , flag=s.size()-1;
    for(int i = 0; i < s.size()/2;i++){
        if(s[i]!=s[flag]){
            counter++;}
        flag--;
    }
    if(s.size()%2 > 0 && counter == 0){
        counter++;
    }
    if(counter == 1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}