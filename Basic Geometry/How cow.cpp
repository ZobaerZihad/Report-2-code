#include<bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
#define fr(i,n) for(int i=1;i<=n;i++)
#define py printf("Yes\n")
#define pn printf("No\n")
#define pb push_back
#define ll long long
#define show(v) for(int fi = 0; fi < v.size(); fi++) cout << v[fi] << " "; cout << endl;
#define speed ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define D(x) cout << #x " = " << (x) << endl
#define endl "\n"
#define t(tt,val) printf("Case %d: %d\n",tt,val)
#define INF INT_MAX
using namespace std;
int main()
{
    speed;

  int t;
  cin>>t;
  fr(i,t)
  {
      int x1,x2,y1,y2,k;

      cin>>x1>>y1>>x2>>y2;


        cin>>k;
       printf("Case %d:\n",(i));
    f(j,k)
      {


          int x,y;
          cin>>x>>y;
          if(x>=x1&&x<=x2&&y>=y1&&y<=y2)
            py;
            else
                pn;
      }
  }



}
