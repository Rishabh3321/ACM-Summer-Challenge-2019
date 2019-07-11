#include<iostream>
#include<vector>

using namespace std;


//nice deduction 
long long single_result(long long num) 
{
    long long res[] = {num,1,num+1,0};
    return res[num%4];
}

long long result(long long a, long long b)
{
     return single_result(b)^single_result(a-1);
}
        

int main()
{
    long long res,n,q,l,r,i,temp;
    cin>>n>>q;
    
    while(q-->0)
    {
        
        cin>>l>>r;
        cout<<result(l,r)<<endl;        
    }
    
    return 0;   
    
}
