#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v;
    ll x; ll y;
    while(n--){
    	cin>>x;cin>>y;
    	v.push_back(make_pair(x,1));
    	v.push_back(make_pair(y,-1));
    }
   	sort(v.begin(),v.end());
   	ll ans =0; ll maxx =0;
   	for(ll i=0;i<v.size();i++){
   		ans+=v[i].second;
   		maxx=max(ans,maxx);
   	}
   	cout<<maxx<<endl;
return 0;
}