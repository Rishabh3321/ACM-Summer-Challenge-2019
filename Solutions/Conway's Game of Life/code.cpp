#include<bits/stdc++.h>

using namespace std;

unsigned long long int p(int n)
{
    unsigned long long int res=1;
    for(int i=0;i<n;i++)
        res=res*2;
    return res;
}

int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        unsigned long long int res;
        
        if(n==1)
        {
            res=2;
        }
        else 
        {
            res=p(n)+p(n-1);
        }
        cout<<res<<endl;
    }
    
    return 0;
}
