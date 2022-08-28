#include <iostream>
 
using namespace std;
 
int min_number(int x, int y, int z)
{
    return x>=y && z>=y ? y : x>=z && y>=z ? z : x;
}
 
int main()
{
    int n, pro=0, pe=0, ma=0, minTeam;
    bool one=false, two=false, three=false;
    int skillCount[3]={0, 0, 0};
    int skillIndx[3]={0, 0, 0};
    cin >> n;
    int skill[n];
    for(int i=0; i<n; ++i)
    {
        cin >> skill[i];
        skillCount[skill[i] - 1]++;
    }
    minTeam=min_number(skillCount[0], skillCount[1], skillCount[2]);
    cout << minTeam;
    if(minTeam>0)
    {
        cout<<endl;
        for(int i=0; i<minTeam; ++i)
        {
            for(int j=0; j<n; ++j)
            {
                if(skill[j]==1 && !one)
                {
                    skillIndx[0]=j + 1;
                    skill[j]=-1;
                    one=true;
                }
                if(skill[j]==2 && !two)
                {
                    skillIndx[1]=j + 1;
                    skill[j]=-1;
                    two=true;
                }
                if(skill[j]==3 && !three)
                {
                    skillIndx[2]=j + 1;
                    skill[j]=-1;
                    three=true;
                }
            }
            cout << skillIndx[0] << " " << skillIndx[1] << " " << skillIndx[2] << endl;
            one=false;
            two=false;
            three=false;
        }
    }
    return 0;
}