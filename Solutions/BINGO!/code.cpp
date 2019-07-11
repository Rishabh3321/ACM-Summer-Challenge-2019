#include<bits/stdc++.h>
using namespace std;

int w[5][5],u[5][5],n;
int max_w=0,max_u=0;

void update()
{
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            if(w[i][j]==n)
            {   
                
                w[i][j]=0;
                break;
            }
    
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            if(u[i][j]==n)
            {
                u[i][j]=0;
                break;
            }
}

int check()
{   
    int temp=0;
    for(int i=0;i<5;i++)
    {   
        temp=0;
        for(int j=0;j<5;j++)
        {
            if(w[i][j]==0)
            {
                temp++;
            }
            
        }
        if(max_w<temp)
            max_w=temp;
    }
    
    
    for(int i=0;i<5;i++)
    {   
        temp=0;
        for(int j=0;j<5;j++)
        {
            if(w[j][i]==0)
            {
                temp++;
            }
            
        }
        if(max_w<temp)
            max_w=temp;
    }
         
    temp=0;
    for(int i=0;i<5;i++)
    {   
        
        if(w[i][i]==0)
            temp++;
        
    }
    if(max_w<temp)
            max_w=temp;
     
     
     temp=0;
    for(int i=0;i<5;i++)
    {   
       
        if(w[i][4-i]==0){
            temp++;
            }
    }
    if(max_w<temp)
            max_w=temp;
    for(int i=0;i<5;i++)
    {   
        temp=0;
        for(int j=0;j<5;j++)
        {
            if(u[i][j]==0)
            {
                temp++;
            }
            
        }
        if(max_u<temp)
            max_u=temp;
    }
    
    for(int i=0;i<5;i++)
    {   
        temp=0;
        for(int j=0;j<5;j++)
        {
            if(u[j][i]==0)
            {   
                temp++;
            }
            
        }
        if(max_u<temp)
            max_u=temp;
    }
    temp=0;
    for(int i=0;i<5;i++)
    {   
        
        if(u[i][i]==0)
            temp++;
        
    }
    if(max_u<temp)
            max_u=temp;
    
    temp=0;
    for(int i=0;i<5;i++)
    {   
        
        if(u[i][4-i]==0)
            temp++;
       
    }
     if(max_u<temp)
            max_u=temp;
    
    if(max_u==5&&max_w<5)
        return 2;
    else if(max_w==5&&max_u<5)
        return 1;
    else if(max_w==5&&max_u==5)
        return 3;
    return 0;
}

void show()
{   
    cout<<"w:  \n";
     for(int i=0;i<5;i++){
        for(int j=0;j<5;j++)
            cout<<w[i][j]<<" ";
            cout<<endl;}
     cout<<"u:  \n";
     for(int i=0;i<5;i++){
        for(int j=0;j<5;j++)
            cout<<u[i][j]<<" ";
            cout<<endl;}
}





int main()
{   
    int t;
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            cin>>w[i][j];
    
     for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            cin>>u[i][j];
    
    while(cin>>n)
    {
        update();
        t=check();
        if(t==0)
        {
            cout<<max_w<<" "<<max_u<<endl;
           
        }
        else if(t==1)
        {   
           cout<<max_w<<" "<<max_u<<endl; 
           cout<<"I Won!";
           break;
        }
        else if(t==2)
        {
            cout<<max_w<<" "<<max_u<<endl;
            cout<<"You won -_-";
            break;
        }
        else if(t==3)
        {   
            cout<<max_w<<" "<<max_u<<endl;
            cout<<"It's a tie!";
            break;
        }
        
    }
    return 0;
    
}
