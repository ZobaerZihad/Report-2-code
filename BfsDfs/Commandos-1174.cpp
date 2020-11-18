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
#define t(tt,val) printf("Case %d: %d\n",tt,val)
using namespace std;
int size=1010;
vector<int>adj[1000];
void prime(int n)
{
    int m=n;
    int div=2;
    int ad=0;
    while(n>1)
    {
        ad=0;
        while(n%div==0)
        {
            n/=div;
            ad=div;
        }
        div++;
        if(ad)adj[m].pb(ad);
    }
    if(ad==m)adj[m].clear();
}
int bfs(int n,int m)
{
    queue<int>q;
    q.push(n);
    int dis[1001];
    memset(dis,-1,sizeof dis);
    dis[n]=0;
    while(!q.empty())
    {
        int v=q.front();
        q.pop();
        for(int i=0;i<adj[v].size();i++)
        {
            int u=v+adj[v][i];
            if(dis[u]==-1&&u<=m)
            {
                dis[u]=dis[v]+1;
                q.push(u);
                if(u==m)
                    return dis[m];
            }
        }
    }
    return dis[m];
}

int main()
{
int t;
for(int i=2;i<=1000;i++)prime(i);
cin>>t;
fr(i,t)
{
    int a,b,k=0;
cin>>a>>b;
int ans=bfs(a,b);
t(i,ans);
}

}
