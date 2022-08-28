#include <iostream>
 
using namespace std;
int main() {
    int a [5][5],r,c,moveR,moveC,moves;
    for(int i = 0 ; i < 5 ; ++i){
        for(int j = 0 ; j < 5 ; ++j){
            cin>>a[i][j];
        }
    }
    for(int i = 0 ; i < 5 ; ++i){
        for(int j = 0 ; j < 5 ; ++j){
            if(a[i][j] == 1){
                r=i+1;
                c=j+1;
            }
        }
    }
    moveR=(r-3);
    moveC = (c-3);
    moveR < 0 ? moveR*=-1:moveR;
    moveC < 0 ? moveC*=-1:moveC;
    moves= moveR+moveC;
    cout<<moves;
}