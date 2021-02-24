#include<bits/stdc++.h>
#define ll long long
unsigned int M = 1000000007;
using namespace std;
int main(){
     ll n,x;
     cin>>n>>x;
     ll a[n+2];
     for(ll i=1;i<=n;i++) cin>>a[i];
     ll dp[x+1]={0};
     dp[0]=1;
    for(ll i=1;i<=x;i++){
        for(int j=1;j<=n;j++){
            if(i>=a[j])
            dp[i]=(dp[i]+dp[i-a[j]]);
        }
        dp[i]=dp[i]%M;
    }
    cout<<dp[x];
     return 0;
}