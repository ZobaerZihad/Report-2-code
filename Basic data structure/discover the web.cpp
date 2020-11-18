#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  ll tc, t = 1;
    cin>>tc;

    for(t = 1; t<= tc; t++){

       printf("Case %lld:\n", t);
       stack<string>stback, stforward;
       stback.push("http://www.lightoj.com/");

       while(1){
       string arr, now;
       cin>>arr;
       if(arr == "VISIT"){
         cin>>now;
         stback.push(now);
         cout<<stback.top()<<endl;
         while(!stforward.empty()) stforward.pop();
       }
       else if(arr == "BACK"){
          if(stback.size() <=1 ) cout<<"Ignored"<<endl;
          else{
             stforward.push(stback.top());
             stback.pop();
             cout<<stback.top()<<endl;

          }
       }
       else if(arr == "FORWARD"){
          if(stforward.empty()) cout<<"Ignored"<<endl;
          else{
            stback.push(stforward.top());
            stforward.pop();
            cout<<stback.top()<<endl;
           }
       }
       else  break;

       }
    }
}



