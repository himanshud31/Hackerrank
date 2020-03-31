#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int> adj[],vector<bool> &visited,int s)
{
    visited[s]=true;
    
    for(int i=0;i<adj[s].size();i++)
    {
        if(!visited[adj[s][i]])
        dfs(adj,visited,adj[s][i]);
    }
}
int main()
{
    int v,e;
    cin>>v>>e;
    
    vector<int> adj[v];
    vector<bool> visited(v+1,false);
    
    for(int i=1;i<=e;i++)
    {
        int f,s;
        cin>>f>>s;
        adj[f].push_back(s);
    
    }

    //unsigned long long int ans=0;
        int sum=0;
    unsigned long long int ans=0;
   
 for(int i=0;i<v;i++)
    {
        
        	
        	if(adj[i].size()!=0){
            ans=ans+sum*(adj[i].size()+1);
            sum=sum+adj[i].size()+1;
      	}
    }
    cout<<ans<<endl;
}

