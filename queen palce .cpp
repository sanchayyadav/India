#include<bits/stdc++.h>
using namespace std;
int c=0;
int dfs(int s,vector<int>adj[],bool vis[]){

      vis[s]=true;
      c++;
     // cout << s << " ";// << endl;
      for(auto i:adj[s]){
        if(!vis[i]){
            dfs(i,adj,vis);
        }
      }
      //cout << endl;
      return c;

}
int main()
{

    int v,e,a,b;
    cin>>v>>e;
    vector<int>adj[v+1];
    for(int i=1;i<=e;i++){
        cin>>a>>b;
        adj[a].push_back(b);
        //adj[b].push_back(a);

    }
    bool vis[v+1];
    //int c=0;

    for(int i=1;i<=v;i++){
            memset(vis,false,sizeof(vis));
    int c=0;
        if(!vis[i]){

            int s=dfs(i,adj,vis);
            if(s==v){
                cout << i << endl;
            break;}
            else if(i==v)
                cout << -1 << endl;
        }
    }
   // cout << c<< endl;
}
