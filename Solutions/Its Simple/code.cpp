#include<bits/stdc++.h>
using namespace std;

long long int gcd(long long int a,long long int b) 
{ 
    if (!a) 
       return b; 
    return gcd(b%a,a); 
} 

long long int k,m,i,found,flag;

//vector<long long int> divs;

void check(long long int n)
{
    for (i=2; i<=sqrt(n); i++) 
	{
        if (n%i==0) 
        {       
            //divs.push_back(i);
            if(gcd(n/i,m)>k)
            {   
                flag=1;
                cout<<n/i<<endl;
                break;
            }
            if(gcd(i,m)>k)
            {   
                found=i;
            }
        }
    }
    if(flag==0)
    {
       if(found==0)
            cout<<"-1\n";
        else
            cout<<found<<endl;
    }
}



int main()
{   
    long long int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>k;
		if(k>n/2||k>m||gcd(n,m)<k)       
		{
		    cout<<"-1\n";
		    
		}
		else
		{   
		    flag=0,found=0;
		    check(n);
    	        }
	}
	return 0;	
}
