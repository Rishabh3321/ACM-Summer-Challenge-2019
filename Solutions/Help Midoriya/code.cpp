#include<iostream>
#include<vector>
 
using namespace std;
 
int main()
{
    long long int n,res,i,temp,max=0;
    
    vector<int> arr;
    cin>>n>>temp;
    
    arr.push_back(temp);
    
    for(i=1;i<n;i++)
    {   
        cin>>temp;
        arr.push_back(temp^arr[i-1]);
    }
    
   
    if(n==1&&temp==0)
    {
        cout<<0;
        return 0;
    }
    
    
    for(long long int i=0;i<n;i++)
    {   
        
        for(long long int j=i+max;j<n;j++)    
        {   
            res=arr[j];
            res = res^arr[i-1];
            
            if(res==0)
            {
                max=j-i+1;
            }
        
        }
    }
    cout<<max;
    
}
