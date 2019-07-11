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
    ll n,i,j=0,k,q,co=0,m,max1=0,max2=0;
    cin>>n>>q;
    double c,d,t;
    vector <int> num(10001);
    vector <int> den(10001);
    
    
    fo(i,n)
    {
        cin>>j;
        num[j]++;
        max1=max(j,max1);
    } 
    
    fo(i,n)
    {
        cin>>j;
        den[j]++;
        max2=max(j,max2);
    }
    fo(j,q)
    {   
        co=0;
        cin>>c>>d>>k;
        
        for(i=1;i<=max1;i++)
        {   
            if(num[i])
            {   
                fo(m,num[i])
                {
                    t=((double)(i*d))/c;
                    if((t-floor(t)==0)&&(t<=max2))
                    {
                        if(den[t])
                            co+=den[t];
                
                    }                        
                }
                
            }
            if(co>=k)
            {
                cout<<i<<" "<<t<<endl;
                break;
            }
        }
        if(co<k)
        {
            cout<<"NIE\n";
        }
        
    }   
    
    return 0;
}
        
