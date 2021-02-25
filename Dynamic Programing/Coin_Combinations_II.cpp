#include<bits/stdc++.h>
using namespace std;
#define ll long long
unsigned int M=1000000007;
int main(){
    int n,x;
    cin>>n>>x;
    int a[n+2];
    for(int i=1;i<=n;i++) cin>>a[i];
    int dp[n+1][x+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++) dp[i][0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=x;j++){
            dp[i][j]=dp[i-1][j];
            if(j>=a[i])
            dp[i][j]=(dp[i][j]+dp[i][j-a[i]])%M;
        }
    }
    cout<<dp[n][x];
    return 0;
}