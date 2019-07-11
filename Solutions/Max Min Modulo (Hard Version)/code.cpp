#include<bits/stdc++.h>
#define ll long long int 
#define fo(i,n) for(i=0;i<n;i++)
#define fok(i,k,n) for(i=k;i<n;i++)
#define ro(i,n) for(i=n-1;i>=0;i--)
#define rok(i,k,n) for(i=k;i>=0;i--)
#define mod 1000000007
using namespace std;


int main()
{
    priority_queue<ll> pq1,pq2;
    ll n,i,j,t,k,sum1=0,sum2=0;
    
    cin>>n>>k;
    
    ll arr1[n],arr2[n],res1[n-k+1],res2[n-k+1];
    
    fo(i,n)
    {
        cin>>j;
        arr1[i]=j;
        arr2[i]=1000000001-j;
    }
    
    fo(i,k-1)
    {
        pq1.emplace(arr1[i]);
    }
    
    fok(i,k-1,n)
    {   
        pq1.emplace(arr1[i]);
        sum1+=pq1.top();
        res1[i-k+1]=pq1.top();
        pq1.pop();
    }
    
    
    
    fo(i,k-1)
    {
        pq2.emplace(arr2[i]);
    }

    fok(i,k-1,n)
    {   
        pq2.emplace(arr2[i]);
        sum2+=(1000000001-pq2.top());
        res2[i-k+1]=(1000000001-pq2.top());
        pq2.pop();
    }
    
    for(auto i: res1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    for(auto i: res2)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
	ll g =__gcd(sum1,sum2);
        g= sum1/g + sum2/g ;
	g=g%mod;
	
	cout<<g; 
    
    
    return 0;
}
