#include<iostream>

using namespace std;

int main()
{
    long long int i,sum=0;
    cin>>i;
    char str[100];
    cin>>str;
    
    for(long long int co=0;co<i;co++)
    {
        sum=sum+((int)(str[co])-48);
    }
    
    if(sum%3==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0; 
}
