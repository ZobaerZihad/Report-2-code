#include <bits/stdc++.h>
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
int n,visited[30000];
vector<int>adj[30000];
int dis[30000];
vector<int>Cost[30000];

void bfs(int s)
{
    for(int i=0;i<n;i++) { visited[i]=0; dis[i]=1000000000; }
    queue<int>Q;
    Q.push(s);
    visited[s] = 1;
    dis[s] = 0;

    while(!Q.empty()){
        int u = Q.front();
        Q.pop();

        for(int i=0;i<adj[u].size();i++){
            int v = adj[u][i];
            if(visited[v]==0){
                visited[v] = 1;
                dis[v] = dis[u] + Cost[u][i];
                Q.push(v);
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        scanf("%d",&n);
        for(int i=0;i<n-1;i++){
            int u,v,cost;
            scanf("%d %d %d",&u,&v,&cost);
            adj[u].pb(v);
            adj[v].pb(u);

            Cost[u].pb(cost);
            Cost[v].pb(cost);
        }
        bfs(0);
        int max_dis=0,strt;
        for(int i=0;i<n;i++){
            if(dis[i]>max_dis){strt=i; max_dis=dis[i]; }
        }

        bfs(strt);

        max_dis=0;
        for(int i=0;i<n;i++){
            if(dis[i]>max_dis){ max_dis=dis[i]; max_dis=dis[i]; }
        }
       printf("Case %d: %d\n",tt,max_dis);
       for(int i=0;i<n;i++){adj[i].clear(); Cost[i].clear(); }
    }
}
