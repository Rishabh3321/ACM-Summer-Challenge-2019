#include<iostream>

using namespace std;

int co;
int N,k;

int main()
{
    int t;
    cin>>t;
        
    while(t-->0)
    {
        cin>>N>>k;
        co=0;
        
        int arr[N];
        
        for(int i=0;i<N;i++)
        {
           cin>>arr[i];
        }
        
        for(int i = 1;i < (1 << N); ++i)
        {   
            int sum=0;
            for(int j = 0;j < N;++j)
                if(i & (1 << j))
                    sum+=arr[j];
            if(sum%k==0)
              co++;
        }
        cout<<co<<endl;
    }
}
