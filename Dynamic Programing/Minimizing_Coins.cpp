#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int a[n+2];
    for(int i=1;i<=n;i++) cin>>a[i];
    int dp[n+1][x+1];
    for(int i=0;i<=n;i++)
    for(int j=0;j<=x;j++) dp[i][j]=0;
    for(int i=0;i<=x;i++) dp[0][i]=1000001;
    for(int i=0;i<=n;i++) dp[i][0]=0;
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