#include<bits/stdc++.h>
#define ll long long int 
#define fo(i,n) for(i=0;i<n;i++)
#define fo1(i,n) for(i=1;i<n;i++)
#define ro(i,n) for(i=n-1;i>=0;i--)
#define ro1(i,n) for(i=n-2;i>=0;i--)
#define mod 1000000007
using namespace std;
 
int main()
{
    ll n,t,i,j=0,k,sum1=0,sum2=0;
    cin>>n>>k;
    vector<ll> arr1(n);
    
	fo(i,n)
    	cin>>arr1[i];
    
	vector<ll> arr2(arr1.begin(),arr1.end());
        vector<ll>::iterator ip,it;
        sort(arr1.begin(),arr1.end());
 
    fo(i,n-k+1)
    {
    	sum1=sum1+arr1[i];
        sum2=sum2+arr1[n-1-i];
     }
    
	ll g =__gcd(sum1,sum2);
        g= sum1/g + sum2/g ;
	g=g%mod;
	
	cout<<g; 
    
    
    return 0;
}
