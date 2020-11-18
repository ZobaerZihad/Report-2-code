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
      double a1,a2,b1,b2,a3,b3,a4,b4,v;
      cin>>a1>>b1>>a2>>b2>>a3>>b3;
     a4=a1+a3-a2;
        b4=b1+b3-b2;
        v=0.5*((a1*b2+a2*b3+a3*b4+a4*b1)-(b1*a2+b2*a3+b3*a4+b4*a1));
        if(v<0){
            v=-1*v;
        }
        printf("Case %d: %.0lf %.0lf %.0lf\n",i,a4,b4,v);
  }



}
