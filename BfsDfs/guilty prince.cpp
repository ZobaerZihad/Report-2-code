#include<bits/stdc++.h>
#include<queue>
int row,col;
int v[30][30];
char a[30][30];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};


using namespace std;

int bfs(int mx,int my)
{
    queue<pair<int,int> >q;
    int tx,ty;
    q.push(make_pair(mx,my));
    int l=1,k;
    v[mx][my]=1;
    while(!q.empty())
    {
        tx=q.front().first;
        ty=q.front().second;

        q.pop();
        for( k=0;k<4;k++)
        {
            int x=tx+dx[k];
            int y=ty+dy[k];
            if(x>=0&&x<col&&y>=0&&y<row&&v[x][y]!=1&&a[x][y]!='#')
            {
                v[x][y]=1;
                  l++;
                q.push(make_pair(x,y));

            }
        }
    }
    return l;
}
int main()
{
   int k,t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        memset(v,0,sizeof(v));
        int mx,my;
        cin>>row>>col;
        for(int i=0;i<col;i++)
        {
            for(int j=0;j<row;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='@')
                    mx=i;
                my=j;
            }

        }
        cout<<"Case "<<k<<": "<<bfs(mx, my)<<endl;
    }
}
