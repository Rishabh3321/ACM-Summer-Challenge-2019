#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n]={};
    
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    sort(arr,arr+n);
    
    int co=0;
    int k=(n-1)/2;
    for(int i=n-1;i>=0&&arr[i]!=-1;i--)
    {   
       
        for(int j=k;j>=0&&arr[j]!=-1;j--)
        {
            if(arr[i]>=2*arr[j])
            {
                arr[j]=-1;
                arr[i]=-1;
                co++;
                k=j-1;
                break;
            }
        }
    }   
        
    cout<<n-co; 
    return 0;
} 
