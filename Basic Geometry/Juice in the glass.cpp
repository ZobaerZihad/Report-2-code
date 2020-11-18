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
      double r1,r2,h,p,r;
      cin>>r1>>r2>>h>>p;
      r=(p*(r1-r2))/h+r2;
      double v=acos(-1)*p*(r*r+r2*r+r2*r2)*1/3.0;
   printf("Case %d: %lf\n",i,v);
  }



}
