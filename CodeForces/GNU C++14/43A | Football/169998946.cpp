#include <iostream>
#include <iterator>
 
using namespace std;
 
 
int main()
{
    int n;
    string team[2]={"",""};
    int score[2]={0,0};
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        if((s!=team[1]&&s!=team[0]) && team[0]==""){
            team[0]=s;
        }
        else if((s!=team[1]&&s!=team[0]) && team[1]==""){
            team[1]=s;
        }
        if(s==team[0]) score[0]++;
        else score[1]++;
    }
    if(score[0]>score[1]){
        cout<<team[0];
    }else{
        cout<<team[1];
 
    }
}
 