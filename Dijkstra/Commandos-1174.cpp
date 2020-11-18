#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
#define fr(i,n) for(int i=1;i<=n;i++)
#define py printf("YES\n")
#define pn printf("NO\n")
#define pb push_back
#define ll long long
#define speed ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define D(x) cout << #x " = " << (x) << endl
#define endl "\n"
using namespace std;
vector<int>adj[105];
int distan1[105],distan2[105];
bool visited[105];

void bfs(int k,int d[])
{
    queue<int>q;
    q.push(k);
    memset(visited,0,sizeof visited);
    visited[k]=1;
    while(!q.empty())
    {
        int v=q.front();
        q.pop();
        for(int i=0;i<adj[v].size();i++)
        {
            int u=adj[v][i];
            if(visited[u]==0)
            {
                visited[u]=1;
                d[u]=d[v]+1;
                q.push(u);
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++)
    {
        for(int i=0;i<105;i++)
            adj[i].clear();
        int n,k,m,x,y,a,b,ans=0;
        cin>>n>>k;
        f(i,k)
        {
            cin>>x>>y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        cin>>a>>b;
        memset(distan1,0,sizeof distan1);
        memset(distan2,0,sizeof distan2);
        bfs(a,distan1);
        bfs(b,distan2);
        for(int i=0;i<n;i++)
        {
            ans=max(ans,distan1[i]+distan2[i]);
        }
        cout<<"Case "<<tt<<": "<<ans<<endl;
    }
}
