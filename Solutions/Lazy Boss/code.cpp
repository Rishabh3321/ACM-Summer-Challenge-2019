#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

ll count_(ll n,ll i)
{
    if (n==0)
        return 1;

    ll x = (i*i)%mod;
    if(n%2==0)                                               //check if >>Even or Odd
        return count_(n/2,x)%mod;
    else
        return (i*count_((n-1)/2,x))%mod;
}

int main()
{
    ll n,res=0,i,j,k;
    cin>>n>>k;

    i=1;
    while(k+1-i)          //For every possibility
    {
        res=(res%mod + count_(n,i)%mod)%mod;
        i++;
    }

    cout<<res;

    return 0;
}
