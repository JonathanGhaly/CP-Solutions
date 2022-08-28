#include <iostream>
 
using namespace std;
 
int main()
{
    int a , b , years;
    cin>>a>>b;
    years=0;
    while (a<=b){
 
        a=a*3;
        b=b*2;
        years+=1;
    }
    cout<<years<<endl;
}