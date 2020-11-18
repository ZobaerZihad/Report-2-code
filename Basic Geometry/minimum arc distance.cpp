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
      double ox,oy,ax,ay,bx,by,o,a,b,ang,arc;
      cin>>ox>>oy>>ax>>ay>>bx>>by;
      o = sqrt(((bx-ax)*(bx-ax)) + ((by-ay)*(by-ay)));
        b = sqrt(((ox-bx)*(ox-bx)) + ((oy-by)*(oy-by)));
        a = sqrt(((ox-ax)*(ox-ax)) + ((oy-ay)*(oy-ay)));
        ang = acos(((a*a)+(b*b)-(o*o)) / (2.0*a*b));
        arc = a* ang;
       printf("Case %d: %lf\n",i,arc);

  }



}
