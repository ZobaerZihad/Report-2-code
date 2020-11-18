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
 vector<int>adj[10000],c;
 int visited[10000],visit[10000];
 void bfs(int k)
 {
    queue<int>q;
    q.empty();
     memset(visited , 0 , sizeof visited);
    int u,v;
    q.push(k);
    visited[k]=1;
    visit[k]++;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++)
        {
            v=adj[u][i];
            if(visited[v]==0)
            {
                visited[v]=1;
                visit[v]++;
                q.push(v);
            }
        }
    }
 }
int main()
{
    speed;
    int t;
    cin>>t;
    for(int h=1;h<=t;h++)
    {
        int k,n,m,x,y;
        f(i,10000)
        adj[i].clear();
        c.clear();
            memset(visit , 0 , sizeof visit);

   cin>>k>>n>>m;

   f(i,k)
   {cin>>x;
   c.pb(x);}
   f(i,m)
   {
       cin>>x>>y;
       adj[x].pb(y);
     //  adj[y].pb(x);
   }
  f(i,k)
  {
      bfs(c[i]);
  }
  int cnt=0;
  for(int i=0;i<10000;i++)
  {
      if(visit[i]==k)
        cnt++;
  }
   cout<<"Case "<<h<<": "<<cnt<<endl;
    }


}
