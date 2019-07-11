#include<iostream>

using namespace std;

int main()
{
    int a,b,c,i,n;
    
    cin>>n;
    for(i=1;i<=n;i++)
    {
        b=0;
        c=0;
        while(b<i)
        {
            
            if(b==0)
                cout<<i<<" ";
            else
            {
                c+=n-b;
                cout<<i+c<<" ";   
            }
            b++;
        }
        cout<<endl;
    }
    
    return 0;
}
