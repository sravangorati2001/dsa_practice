#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int a[n+2];
    for(int i=1;i<=n;i++) cin>>a[i];
    int dp[n+1][x+1];
   memset(dp,0,sizeof(dp));
    for(long i=0;i<=x;i++) dp[0][i]=1000001;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=x;j++){
           if(j>=a[i])
           dp[i][j]=min(dp[i-1][j],dp[i][j-a[i]]+1);
           else dp[i][j]=dp[i-1][j];
        }
    }
    if(dp[n][x]==1000001) dp[n][x]=-1;
    cout<<dp[n][x];
    return 0;
}


/////////////////////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,x;
    cin>>n>>x;
    ll a[n+2];
    for(ll i=1;i<=n;i++) cin>>a[i];
    ll dp[x+1];
    for(ll i=0;i<=x;i++) dp[i]=LLONG_MAX;
    dp[0]=0;
    for(ll i=1;i<=x;i++){
      for(ll j=1;j<=n;j++){
          if(i>=a[j] and dp[i-a[j]]!=LLONG_MAX and (1+dp[i-a[j]]<dp[i]))
          dp[i]=1+dp[i-a[j]];
      }
    }
    if(dp[x]==LLONG_MAX) dp[x]=-1;
    cout<<dp[x];
    return 0;
}
