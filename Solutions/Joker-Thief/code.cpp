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
    ll n,t,i,j=0,sum1=0,sum2=0;
    set<ll> bob;
    set<ll> alice;
    cin>>n;
    fo(i,n)
    {	
    	cin>>j;
    	if(alice.find(j)!=alice.end())
			alice.erase(alice.find(j));
		else
			alice.insert(j);
    	
    }
    fo(i,n)
    {	
    	cin>>j;
    	if(bob.find(j)!=bob.end())
			bob.erase(bob.find(j));
		else
			bob.insert(j);	
	  }
	
    auto ip=alice.begin();
    for(;ip!=alice.end();++ip)
    {
    	sum1=(sum1%mod +*ip%mod)%mod;
	  }
    
    auto it=bob.begin();
    for(;it!=bob.end();++it)
    {
        sum2=(sum2%mod +*it%mod)%mod;
    }
	
	cout<<sum1%mod<<"\n"<<sum2%mod<<endl;
	if(sum1>sum2)
		cout<<"Alice\n";
	else if(sum2>sum1)
		cout<<"Bob\n";
	else 
		cout<<"Tie\n";
	return 0;   
}
