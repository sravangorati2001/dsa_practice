#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int h[n+2],s[n+2];
    for(int i=1;i<=n;i++) cin>>h[i];
    for(int i=1;i<=n;i++) cin>>s[i];
    int dp[n+1][x+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=x;j++){
           if(j>=h[i])
           dp[i][j]=max(dp[i-1][j],s[i]+dp[i-1][j-h[i]]);
           else dp[i][j]=dp[i-1][j];
        }
       // cout<<dp[i][<<" ";
    }
   cout<<dp[n][x];
    return 0;
}