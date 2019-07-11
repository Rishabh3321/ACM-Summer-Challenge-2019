#include <bits/stdc++.h>
#define ll long long int

using namespace std;


int main()
{
    
    ll x,y,q,c1,c2,n=0;
    map<ll,ll> d1, d2;

    cin >>q;
    while (q--)
    {
        //For d1.
        cin>>x>>y;
        c1=x+y;
        d1[c1]++;

        //For d2.
        c2=x-y;
        d2[c2]++;

    }
    //Counting no. of pairs on d1 type
    for(auto i: d1)
        n+=((i.second)*(i.second-1))/2;

    //Counting no. of pairs on d2 type
    for(auto i: d2)
        n+=((i.second)*(i.second-1))/2;

    cout<<n;

    return 0;
    }
