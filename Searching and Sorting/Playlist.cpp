#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    ll a[n],ans=0,l=0;
    set<ll> s;
    for(int i=0,j=0;i<n;i++){
         cin>>a[i];
         l=s.size();
         s.insert(a[i]);
         if(s.size()>l){
              ans=max(ans,l+1);
         }
         else if(ans<n/2){
              while(a[j]!=a[i]){
                   s.erase(a[j]);
                   j++;
              }
              j++;
         }
    }
   // l=s.size();
        // ans=max(ans,l);
        cout<<ans;
}