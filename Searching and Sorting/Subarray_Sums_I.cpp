#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,x,sum=0,ans=0;
    cin>>n>>x;
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];
   for(ll i=0,j=0;i<n;i++){
       if(a[i]>x){
           j=i+1;
           continue;
       }
       else if(a[i]==x){
           ans++;
           j=i+1;
           continue;
       }
      else{
          sum+=a[i];
              while(sum>=x and j<i){
                  if(sum==x) ans++;
                  sum-=a[j];
                  j++;
              }
      }
   }
    cout<<ans;
}