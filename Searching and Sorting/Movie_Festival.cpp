#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   ll n;
   cin>>n;
   vector<pair<ll,ll>> a;
   while(n--){
        ll p,q;
        cin>>p>>q;
        a.push_back({p,q});
   }
   sort(a.begin(),a.end(),[&](pair<ll,ll> &x,pair<ll,ll> &y){
        return x.second<y.second;
   });
   ll ans=0,cur_end=0;
   for(auto x:a){
        if(x.first>=cur_end){
             ans++;
             cur_end=x.second;
        }
   }
   cout<<ans<<"\n";
}