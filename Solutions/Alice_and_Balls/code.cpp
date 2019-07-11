#include<iostream>
using namespace std;


int main()
{
    long long int n,i;
    
    cin>>n;
    
    char str[n];
    
    cin>>str;
    
    char ch = str[n-1];
    for(i=n-1;i>=0;i--)
    {
        if(str[i]!=ch)
        {
            break;
        }
    }
    cout<<i+1;
    
}
