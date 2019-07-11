#include<bits/stdc++.h>
using namespace std;
 
 
int n, m, k;
char grid[11][11];													//to store all character in a grid 
vector<string> ALL_paths;

int check(string ch) 
{
    for(int i=0; i<(int)ch.length(); i++) 
	  {
        char c = ch[i];
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') 
		return 1;
    }
    
    return 0;
}
 
void find_AllPaths(int row, int column, string path) 
{
    path.push_back(grid[row][column]);
    if(row==n && column==m) 
	  {
        ALL_paths.push_back(path);
        return;
    }
    
    if(row<n) find_AllPaths(row+1,column,path);
    if(column<m) find_AllPaths(row,column+1,path);
    
    return;
}
 
 
int main() 
{
    
    int t,co=0;
    cin>>t;
    while(t--) 
	  {
        cin>>n>>m>>k;
        for(int i=1; i<=n; i++) 
		    {
            for(int j=1; j<=m; j++) 
			      {
                cin>>grid[i][j];
            }
            grid[i][m+1] = '\0';
        }
        
		
		
		
        find_AllPaths(1, 1, "");
        
        sort(ALL_paths.begin(), ALL_paths.end());
        
        int flag=0;
        for(int i=0; i<(int)ALL_paths.size(); i++) 
		    {
            if(check(ALL_paths[i])) 
			      {
				        co++;
			      }
            if(co==k) 
			      {
                cout<<ALL_paths[i]<<endl;
                flag=1;
            }
        }
        
        
        if(!flag) 
			    cout<<"-1"<<endl;
		    
        co=0;
		    ALL_paths.clear();
    }
    
    return 0;
}
