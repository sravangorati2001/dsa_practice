#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
     ll n,m,x;
     cin>>n>>m;
     multiset<ll,greater<int>> s;
     while(n--){
          cin>>x;
          s.insert(x);
     }
     while(m--){
          cin>>x;
          auto it=s.lower_bound(x);
          if(it!=s.end()) {
               cout<<(*it)<<"\n";
               s.erase(it);
          }
          else cout<<"-1\n";
     }
}