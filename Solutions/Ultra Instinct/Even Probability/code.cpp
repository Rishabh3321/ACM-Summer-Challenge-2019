#include<bits/stdc++.h>
 
using namespace std;
 
vector<int> arr(10000000,0);
int main()
{   
    vector<int> pro(11,0);
    int n,k,q;
    long long int a;
    cin>>n>>k>>q;
 
    if(n%2==0)
        pro[0]=1;
    else
        pro[0]=0;
 
    arr[1]=n;
    for(int x=1;x<=10;x++)
    {
        int t = (pow(3,x)-1)/2;
        int y = (pow(3,x-1)+1)/2;
        int t3 = pow(3,x);
        int j=0;
        for(int i=1;i<=t3;i++)
        {
            int pos = t+i;
            if(i%3==1)
                arr[pos]=(arr[y+j])&k;
            else if(i%3==2)
                arr[pos]=(arr[y+j])^k;
            else
            {
                arr[pos]=(arr[y+j])|k;
                j++;
            }
            if(arr[pos]%2==0)
                pro[x]++;
        }
    }
    
    for(int i=0;i<q;i++)
    {
        cin>>a;
        if(pro[a]==0)
            cout<<"All odd\n";
        else
        {   
            int gc = __gcd(pro[a],(int)pow(3,a));
            a = pro[a]/gc + (int)pow(3,a)/gc;
            cout<<a<<endl;
        }
    }
 
 
    return 0;
}
