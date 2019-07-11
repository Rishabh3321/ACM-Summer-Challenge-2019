#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    long long int l=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        l=((n*(n-1))/2  -2*(n-2)  -1);
        l*=(n-1)*n;
        l=l/4;
        cout<<l<<endl;
    }
    return 0;
}
