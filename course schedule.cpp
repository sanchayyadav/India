#include<bits/stdc++.h>
using namespace std;
int n,m,p[100];
vector<int>v[100],ans;
bool vis[100],act[100];
void dfs(int u)
{
    vis[u]=1;
    act[u]=1;
    //cout << "vis " << vis[u] << " ";
    //cout << "act " << act[u] << " ";
    for(int i:v[u]){

        if(act[i]){
            cout << "IMPOSSIBLE";
        exit(0);
        }
        else{
            if(!vis[i]){
                p[i]=u;
                dfs(i);
            }
        }
    }
    act[u]=0;
    ans.push_back(u);
}
int main()
{
    cin>>n>>m;
    for(int i=0,a,b;i<m;++i){
        cin>>a>>b,--a,--b;
        v[a].push_back(b);
    }
    for(int i=0;i<n;++i)
        if(!vis[i]){
    //cout << i+1 << " ";
            dfs(i);
        }
        cout << endl;
            reverse(ans.begin(),ans.end());
            for(int i: ans)
                cout << i+1 << " ";
}
