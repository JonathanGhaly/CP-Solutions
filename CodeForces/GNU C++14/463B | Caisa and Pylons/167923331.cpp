#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int dollar=0, n, energy=0;
    cin >> n;
    int pyl[n];
    for(int i=0; i<n; i++)
    {
        cin >> pyl[i];
    }
    dollar+=pyl[0];
    for(int i=1; i<n; i++)
    {
        if(pyl[i]<=pyl[i - 1]) energy+=(pyl[i - 1] - pyl[i]);
        else
        {
            if(energy < pyl[i] - pyl[i - 1])
            {
                dollar+=(pyl[i] - pyl[i - 1]) - energy;
                energy=0;
            } else
            {
                energy-=pyl[i] - pyl[i - 1];
            }
        }
    }
    cout << dollar;
 
}