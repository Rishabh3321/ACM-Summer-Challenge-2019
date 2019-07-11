#include<bits/stdc++.h>
#define ll long long int 
#define fo(i,n) for(i=0;i<n;i++)
#define fo1(i,n) for(i=1;i<n;i++)
#define ro(i,n) for(i=n-1;i>=0;i--)
#define ro1(i,n) for(i=n-2;i>=0;i--)
 
using namespace std;
 
int main()
{
    ll t,n,i,top,last,k,sum=0,MAX=0;
    
    cin >> t;
    while (t--) 
    {
        cin >>n>>k;
        vector<int> arr(n); 
        
        fo(i,n)
            cin>>arr[i];
        fo(i,k)                 //taking boundary condition of maximum pops.
            sum+=arr[i];
        
        //logic:>> if any element is discarded from top then one element from
        //last is also removed for push&pop of operation of first. 
        MAX=sum;
        top=0;
        last=k-1;
        while (last-top > 0) 
        {
            sum -= arr[top];
            sum -= arr[last];
            MAX = max(MAX, sum);
            top++;
            last--;
        }
        cout<<MAX<<endl;
        sum=0;
    }
    
    return 0;
}
