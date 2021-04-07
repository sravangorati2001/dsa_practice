#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,val=0,ans=0;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)  cin>>a[i];
         sort(a,a+n);
         val=a[n/2];
   for(int i=0;i<n;i++){
       ans+=abs(a[i]-val);
   }
   cout<<ans <<"\n";
}