
// Time Complexity - o(n^2) 

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    ll a[n];
     ll dp[n+1],ans=0,temp=0;
    for(int i=0;i<n;i++){
      cin>>a[i];
      dp[i]=1;
    }  
    for(int i=0;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(a[i]>a[j] and dp[i]<dp[j]+1){
               dp[i]=dp[j]+1;
            }
        }
        ans=max(ans,dp[i]);
    }
   // for(int i=0;i<n;i++) cout<<dp[i]<<" ";
  cout<<ans;
}


// Time Complexity - o(nlogn)  : DP + Binary Search

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    ll a[n];
    vector<ll> v; 
    for(int i=0;i<n;i++) cin>>a[i];
    v.push_back(a[0]);
    for(int i=1;i<n;i++){
        if(v.back()<a[i]) v.push_back(a[i]);
        else{
            ll ind=lower_bound(v.begin(),v.end(),a[i])-v.begin();
            v[ind]=a[i];
        }
    }
  cout<<v.size();
}
