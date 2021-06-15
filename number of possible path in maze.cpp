#include<bits/stdc++.h>
using namespace std;
int vis[100][100];
int pt=0,c=1,l=1,k,q;
int go(vector<vector<int>> &v,int sx,int sy,int dx,int dy,int r,int c){
     if(sx<0||sy<0||sx>=c||sy>=r||v[sx][sy]==0||vis[sx][sy]==1)
        return 0;
     if(sx==dx&&sy==dy)
        pt++;
     vis[sx][sy]=1;
    go(v,sx,sy-1,dx,dy,r,c);
     go(v,sx,sy+1,dx,dy,r,c);

      go(v,sx-1,sy,dx,dy,r,c);

    go(v,sx+1,sy,dx,dy,r,c);

    vis[sx][sy]=0;
}
int main()
{
    int r,c;
    cin>>r>>c;
    vector<vector<int>>v(r,vector<int>(c));
    memset(vis,0,sizeof(vis));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>v[i][j];
        }
    }
    //pt=0;
    go(v,0,0,r-1,c-1,r,c);
    cout << pt;
}
