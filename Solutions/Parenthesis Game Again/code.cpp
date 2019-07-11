#include<bits/stdc++.h>
#define ll long long int 
#define fo(i,n) for(i=0;i<n;i++)
#define fo1(i,n) for(i=1;i<n;i++)
#define ro(i,n) for(i=n-1;i>=0;i--)
#define ro1(i,n) for(i=n-2;i>=0;i--)
 
using namespace std;
 
int main()
{
    ll n,t,i,j;
    cin>>n;
    string br[n];
    vector<int> x(n,0);
    vector<int> y(n,0);
    
    
    fo(i,n)
    {   
        stack<char> s;
        cin>>br[i];
        for(j=0;j<br[i].size();j++)
        {           
            if(br[i][j]==')')
            {   
                if(!s.empty())
                    s.pop();
                else
                    y[i]++;
                
            }
            else if(br[i][j]=='(')
                s.push(br[i][j]);
            
        }
        while(!s.empty())
        {
            s.pop();
            x[i]++;
        }
 
    }
    
    int co=0,z=0;    
    fo(i,n)
    {   
        if(y[i]==0&&x[i]!=0)
        {
            
            auto p=find(y.begin(),y.end(),x[i]);
            int index = distance(y.begin(),p);
            if(p!=y.end()&&index!=i)
            {
                *p=-1;
                x[i]=-1;
                co++;
                // cout<<" i: "<<i;
                // cout<<" index: "<<index<<endl;
            }
        
        }
        else if(y[i]==0&&x[i]==0) 
        {
            z++;
        }
    }
    

    cout<<co+z/2;
    
    return 0;   
}
