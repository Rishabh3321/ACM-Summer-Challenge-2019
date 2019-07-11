#include<bits/stdc++.h>

using namespace std;

//int b=1,c=2,s=2;

vector<int>co(100001,0);

int bcs(int sum)
{
    if(sum==1)
    {	
       return 1;
        
    }
    else if(sum==2)
    {   
       return 3;
        
    }
    else if(co[sum]!=0) 
    {	
        return co[sum];
    }
    else 
    {
        unsigned long long int result=((unsigned long long int)bcs(sum-1)+2*(unsigned long long int)bcs(sum-2))%1000000007;
        co[sum]=result;
         return result;
        
        
    }
   
}
int main()
{
   int q; 
   cin>>q;
   
   while(q--)
   {
       int sum;
       cin>>sum;
       cout<<bcs(sum)<<endl;

   }
    
    
  return 0;   
}
