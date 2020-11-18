#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long sol(ll n,ll m,ll k )
{
    if(k>n||k>m)
        return 0;
        else if(k==0)
        return 1;
    else if(m==1)
        return n;

    else
        return n*sol(n-1,m-1,k-1)+sol(n,m-1,k);

}
int main()
{
    long long  t,n,k,i;
  cin>>t;
  for(i=1;i<=t;i++)
  {
      cin>>n>>k;
      cout<<"Case "<<i<<": "<<sol(n,n,k)<<endl;
  }

}



