#include<iostream>

using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    char d;
    d = 'A'+n-1;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<2*n-1;j++)
        {
            if(j==2*(n-1)-i||j==i||j==n-1)
            {
                cout<<(char)(d-i);
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    for(i=0;i<2*n-1;i++)
    {
        if(i<n)
        {
            cout<<(char)(d-i);
        }
        else
        {
            cout<<(char)('A'+i+1-n);
        }
    }
    cout<<endl;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<2*n-1;j++)
        {
            if(j==n+i||j==n-2-i||j==n-1)
            {
                cout<<(char)('B'+ i);
            }
            else
            {
                cout<<" ";
            }
            
        }cout<<endl;
    }
}

