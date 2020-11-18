#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
#define fr(i,n) for(int i=1;i<=n;i++)
#define priny printf("YES\n")
#define prinn printf("NO\n")
#define pb push_back
#define ll long long
#define speed ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define D(x) cout << #x " = " << (x) << endl
#define endl "\n"
#define t(tt,val) printf("Case %d: %d\n",tt,val)
#define INF INT_MAX
using namespace std;
vector<int>adj[105];
bool vis[21][21];
char a[21][21];
int dis[21][21];
int ax,ay,bx,by,cx,cy,hx,hy,n,m;
 int dx[]={0,-1,0,1};
int dy[]={1,0,-1,0};
void bfs(int hx,int hy)
{
    f(i,21)
    f(j,21)
    {
        dis[i][j]=INF;
        vis[i][j]=0;
    }
    queue<pair<int,int> >q;
    q.push(make_pair(hx,hy));
    dis[hx][hy]=0;
    vis[hx][hy]=1;
    int px,py;
    while(!q.empty())
    {
        px=q.front().first;
        py=q.front().second;
        q.pop();
        for(int i=0;i<4;i++)
        {
            hx=px+dx[i];
            hy=py+dy[i];
               if(hx>-1&&hx<n&&hy>-1&&hy<m&&a[hx][hy]!='#'&&a[hx][hy]!='m'&&vis[hx][hy]==0) {
                dis[hx][hy] = min(dis[px][py]+1,dis[hx][hy]);
                vis[hx][hy]=1;
                q.push(make_pair(hx,hy));
            }
        }
    }


}
int main()
{
int t;
cin>>t;
fr(k,t)
{

    cin>>n>>m;

    f(i,n)
    f(j,m)
    {cin>>a[i][j];
    if(a[i][j]=='a')
        {ax=i;
    ay=j;}
    else if(a[i][j]=='b')
        {bx=i;
    by=j;}
    else if(a[i][j]=='c')
        {cx=i;
    cy=j;}
    else if(a[i][j]=='h')
        {hx=i;
    hy=j;}


    }
      bfs(hx,hy);
      //int x=max(max(dis[ax][ay],dis[bx][by]),dis[cx][cy]);
    t(k,max(max(dis[ax][ay],dis[bx][by]),dis[cx][cy]));
}


}
