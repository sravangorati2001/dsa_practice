#include<bits/stdc++.h>
#define ll long long
unsigned int M = 1000000007;
using namespace std;
int main(){
     ll n;
     cin>>n;
     ll dp[n+1]={0};
     dp[0]=1;
     for(int i=1;i<=n;i++){
         for(int j=1;j<=6;j++){
           if(i>=j)
           dp[i]=(dp[i] + dp[i-j])%M;
         }
     }
     cout<<dp[n];
     return 0;
}