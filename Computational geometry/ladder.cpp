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
  fr(j,t)
  {
      double x,y,c;
      cin>>x>>y>>c;
      double lo=0.0,hi=max(x,y);

        for(int i=0;i<50;i++)
        {
            double mid=(lo+hi)/2;
            double h2=sqrt((y*y)-(mid*mid));
            double h1=sqrt((x*x)-(mid*mid));
            double temp_ans=(1.0/h1)+(1.0/h2);
            temp_ans=1.0/temp_ans;
            if(temp_ans>=c)
                lo=mid;
            else
                hi=mid;
        }
     // t(j,lo);
        printf("Case %d: %.10lf\n",j,lo);
  }



}






