#include <iostream>
 
using namespace std;
 
int main()
{
    string s[3];
    int a=0,b=0,c=0;
    char out[3];
    cin>>s[0]>>s[1]>>s[2];
    for(int i = 0 ; i < 3 ; i++){
        string temp = s[i];
        if(temp[1]=='>'){
            if(temp[0]=='A'){
                a++;
            }else if(temp[0]=='B'){
                b++;
            }else{
                c++;
            }
        }else{
          if(temp[2]=='A'){
                a++;
            }else if(temp[2]=='B'){
                b++;
            }else{
                c++;
            }
        }
      }
      if(a==1&&b==1&&c==1){
        cout<<"Impossible"<<endl;
        return 0;
      }
      if(a==0){
        cout<<'A';
    }else if(b==0){
        cout<<'B';
    }else if(c==0){
        cout<<'C';
    }  if(a==1){
        cout<<'A';
    }else if(b==1){
        cout<<'B';
    }else if(c==1){
        cout<<'C';
    }if(a==2){
        cout<<'A';
    }else if(b==2){
        cout<<'B';
    }else if(c==2){
        cout<<'C';
    }
 
}